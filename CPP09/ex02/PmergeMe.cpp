#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){};

PmergeMe::PmergeMe(int vecSize, int deqSize): _vecSize(vecSize), _deqSize(deqSize){};

PmergeMe::~PmergeMe(){};



void PmergeMe::MergeSortedVec(std::vector<int>& vec, int start, int middle, int end) 
{
	
    // temp is used to temporary store the vector obtained by merging
    // elements from [s to m] and [m+1 to e] in vector v
	std::vector<int> temp;

	int i = start;
	int j = middle + 1;
	
	while (i <= middle && j <= end) {

		if (vec[i] <= vec[j]) 
		{
			temp.push_back(vec[i]);
			i++;
		}
		else 
		{
			temp.push_back(vec[j]);
			j++;
		}
	}

	while (i <= middle) 
	{
		temp.push_back(vec[i]);
		i++;
	}

	while (j <= end) 
	{
		temp.push_back(vec[j]);
		j++;
	}

	for (int i = start; i <= end; i++)
		vec[i] = temp[i - start];
}

// the interval from [s to m] and [m+1 to e] in v are sorted
// the function will merge both of these intervals
// such the interval from [s to e] in v becomes sorted
void PmergeMe::MergeSortedDeq(std::deque<int>& deq, int start, int middle, int end) 
{
	
    // temp is used to temporary store the vector obtained by merging
    // elements from [s to m] and [m+1 to e] in vector v
	std::deque<int> temp;

	int i = start;
	int j = middle + 1;
	
	while (i <= middle && j <= end) {

		if (deq[i] <= deq[j]) 
		{
			temp.push_back(deq[i]);
			i++;
		}
		else 
		{
			temp.push_back(deq[j]);
			j++;
		}
	}

	while (i <= middle) 
	{
		temp.push_back(deq[i]);
		i++;
	}

	while (j <= end) 
	{
		temp.push_back(deq[j]);
		j++;
	}

	for (int i = start; i <= end; i++)
		deq[i] = temp[i - start];
} 


void PmergeMe::MergeSortVec(std::vector<int>& vec, int start, int end)
{
	if (start < end) 
	{
		int middle = (start + end) / 2;
		MergeSortVec(vec, start, middle);
		MergeSortVec(vec, middle + 1, end);
		MergeSortedVec(vec, start, middle, end);
	}
}


void PmergeMe::MergeSortDeq(std::deque<int>& deq, int start, int end)
{
	if (start < end) 
	{
		int middle = (start + end) / 2;
		MergeSortDeq(deq, start, middle);
		MergeSortDeq(deq, middle + 1, end);
		MergeSortedDeq(deq, start, middle, end);
	}
}



void PmergeMe::getTimeSortVec(std::vector<int> &vec)
{
	std::clock_t beginSortingVec = std::clock();
	MergeSortVec(vec, 0, this->_vecSize - 1);
	std::clock_t endSortingVec = std::clock();
	this->_elapsedTimeVec = static_cast<double>(endSortingVec - beginSortingVec) / CLOCKS_PER_SEC * 1000000;
};


void PmergeMe::getTimeSortDeq(std::deque<int> &deq)
{
	std::clock_t beginSortingDeque = std::clock();
	MergeSortDeq(deq, 0, this->_deqSize - 1);
	std::clock_t endSortingDeque = std::clock();
	this->_elapsedTimeDeq = static_cast<double>(endSortingDeque - beginSortingDeque) / CLOCKS_PER_SEC * 1000000;
}



PmergeMe::PmergeMe(PmergeMe const &cpy)
{
	*this = cpy;
};



PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this == &rhs)
		std::cout << "it is itself" << std::endl;
	return *this;
};
