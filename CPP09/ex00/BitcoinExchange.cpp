
#include "BitcoinExchange.hpp"

/*
	program outputs the value of a certain amount of bitcoin on a certain date.
	program uses a database in cvs format (comma separeted values) which will represent bitcoin price over time.
	program takes as input a second database, storing the different prices/dates to evaluate.
	program must display on the standard output the result of the value multiplied
	by the exchange rate according to the date indicated in your database

*/

BitcoinExchange::BitcoinExchange(char *datafile): _datafile(datafile)
{
	read_txt_file(_datafile, read_csv_data());

	//print_data(read_csv_data());
}


/* 
	Read/manipulate the data in .csv file; 
	it is returning a map as date & exch.rate pair
*/
std::map<std::string, double>	BitcoinExchange::read_csv_data()
{
	std::map<std::string, double>	dataPair;
	std::string						line;

	std::ifstream					fileIn("./data.csv");
	if( fileIn.fail() ) 
        std::cerr << RED << FILE_NOT_OPENED << RESET << std::endl;

	/* read the line && insert the data into a map */
	std::getline(fileIn, line);

	while ( std::getline(fileIn, line) )
	{
		std::stringstream	strStream(line); 
		std::string			date;
		std::string			exchange_rate;
		
		std::getline(strStream, date, ',');
		std::getline(strStream, exchange_rate, ',');
		dataPair[date] = std::atof(exchange_rate.c_str());
	}
	return	dataPair;
}

// 2021-12-31 = 46245 key = value

/*
	read/manipulate data in the .txt file
	use the map from csv file to do the necessary operations
*/
int	BitcoinExchange::read_txt_file(char *file, std::map<std::string, double> data)
{
	std::string			firstLine;
	std::string			rest;
    
	std::ifstream		fileIn(file);
	if( fileIn.fail() ) 
	{
        std::cerr << RED << FILE_NOT_OPENED << file << RESET << std::endl;
        return EXIT_FAILURE;
	}

	std::getline(fileIn, firstLine);

	if ( firstLine.compare("date | value") != 0 )
	{
		std::cerr << RED << CHECK_FIRST_LINE << RESET << std::endl;
		//return 1;
	}
	while( std::getline(fileIn, rest) )
	{
		std::istringstream  istrStream(rest);
		std::string			date;
    	std::string 		value;
    	char 				sep;
		
		//std::cout << YELLOW << "test" << RESET << std::endl;
		//istrStream >> date >> sep >> value; // saves word by word
		if ( !(istrStream >> date >> sep >> value) )
		{
			std::cout << RED << BAD_TXT_INPUT << RESET << std::endl;
			continue ;
		}
		else if ( sep != '|' )
		{
			std::cout << RED << TXT_SEP_MISSING << RESET << std::endl;
			continue ;
		}
		else if ( check_value(value) == 2 || check_date(date) == 1 )
		{
				//std::cout << BLUE << check_value(value) << RESET << std::endl;
				//std::cout << RED << check_date(value) << RESET << std::endl;
			continue ;
		}
		else if ( check_value2(value) == 1)
		{
			std::cout << RED << VALUE_NOT_DIGIT << RESET << std::endl;
			continue ;
		}
		else
		{
			double multiply = atof(value.c_str()) * findExchangeRate(date, data);
			std::cout << GREEN << date << " => " << value << " = " << multiply << RESET << std::endl;
		}
		//std::cout << GREEN << date << sep << value << RESET << std::endl;
	}

	fileIn.close();
	return EXIT_SUCCESS;
}

double BitcoinExchange::findExchangeRate(std::string date, std::map<std::string, double> data) 
{
	std::map<std::string, double>::iterator iter = data.find(date);

    if (iter != data.end()) 
	{
        return iter->second;
    }
	else 
	{
        std::string prevDate = getPrevDate(date);
        return findExchangeRate(prevDate, data);
    }
	 
}

std::string BitcoinExchange::getPrevDate(std::string &date)
{
	int 		year;
	int			month;
	int 		day;
	std::string	temp;
	int 		token;
	int 		i;

	i = 0;
	token = 0;

	while( date[i] != '\0')
	{
		if ( date[i] == '-' )
		{
			switch( token )
			{
				case 0: {
					year = std::atoi(temp.c_str());
					temp.clear();
					token += 1;
					break ;
				}
				case 1: {
					month = std::atoi(temp.c_str());
					temp.clear();
					token += 1;
					break ;
				}
			}
		}
		else if ( isdigit(date[i]) == true )
			temp += date[i];
		i += 1;
	}
	if ( token == 2 )
		day = std::atoi(temp.c_str());
	

/* 	std::cout << date << " this is date " << std::endl;
	std::cout << year << " this is year " << std::endl;
	std::cout << month << " this is month " << std::endl;
	std::cout << day << " this is day " << std::endl; */


	int		prevDay;
	int		prevMonth;
	int		prevYear;

	prevDay = day - 1;
    prevMonth = month;
    prevYear = year;

	if ( prevDay == 0 )
	{
		prevMonth = month - 1;
		if ( prevMonth == 0 )
		{
			prevMonth = 12;
			prevYear = year - 1;
		}
	}

	std::string			prevDate;
	std::ostringstream	convert;

	convert << prevYear;
	prevDate = convert.str() + "-";

	if ( prevMonth < 10 )
	{
		std::ostringstream	convert2;
		convert2 << prevMonth;
		prevDate += "0" + convert2.str() ;
				//std::cout << YELLOW << prevDate << " this is prevdate " << RESET << std::endl;
	}
	else
	{
		std::ostringstream	convert2;
		convert2 << prevMonth;
		prevDate += convert2.str();
		//std::cout  << prevDate << " this is prevdate " << RESET << std::endl;
	}
	if ( prevDay < 10)
	{
		std::ostringstream	convert3;
		convert3 << prevDay;
		prevDate += "-0" + convert3.str();
				//std::cout << RED << prevDate << " this is prevdate " << RESET << std::endl;
	}
	else
	{
		std::ostringstream	convert4;
		convert4 << prevDay;
		prevDate += "-" + convert4.str();
				//std::cout << BLUE << prevDate << " this is prevdate " << RESET << std::endl;

	}

    return prevDate;
}

/*
	Error Check
	Valid Value 
*/

int	BitcoinExchange::check_value2(std::string &value)

{
	int	i = 0;
	int count = 0;

	while ( value[i] != '\0')
	{
		if ( value[i] != ',' && value[i] != '.' && !isdigit(value[i]) )
		{
			
			return 1;
		}
		else if ( value[i] == '.' || value[i] == ',' )
		{
			count += 1;
		}
		i++;
	}
	if ( count > 1)
		return 1;

	return 0;
}

int	BitcoinExchange::check_value(std::string &value)
{

	if ( atof(value.c_str()) < 0 )
	{
		std::cout << RED << VALUE_NEGATIVE << RESET << std::endl;
		this->errNum = 2;
	}
	else if ( atof(value.c_str()) > 1000 )
	{
		std::cout << RED << VALUE_LARGE << RESET << std::endl;
		this->errNum = 2;
	}
	else
		this->errNum = 0;

	return 	this->errNum;
}


/*
	Error Check
	Valid Date
*/
int	BitcoinExchange::check_date(const std::string &date)
{
	int 				year;
	int 				month;
	int 				day;
	char 				sep1;
	char				sep2;
	std::istringstream	strStream(date);

	//std::cout << RED << year << sep1 << month << sep2 << day << RESET << std::endl;
	if ( !(strStream >> year >> sep1 >> month >> sep2 >> day) )
	{
		std::cout << RED << BAD_TXT_INPUT << RESET << std::endl;
		this->errNum = 1;
	}
	else if (sep1 != '-' || sep2 != '-')
	{
		std::cout << RED << _SEPARATOR << RESET << std::endl;
		this->errNum = 1;
	}
	else if ( year < 2009 || year > 2022 )
	{
		std::cout << RED << _YEAR << RESET << std::endl;
		this->errNum = 1;
	}
	else if ( month < 1 || month > 12 )
	{
		std::cout << RED << _MONTH << RESET << std::endl;
		this->errNum = 1;
	}
	else if ( day < 1 || day > 31 )
	{
		std::cout << RED << _DAY << RESET << std::endl;
		this->errNum = 1;
	}
	else if ( month == 2 && day > 29 )
	{
		std::cout << RED << _FEB << RESET << std::endl;
		this->errNum = 1;
	}
	else 
		this->errNum = 0;
	return this->errNum;
}

/*
*/
void	BitcoinExchange::print_data(const std::map<std::string, double>&dateValuePair)
{
	std::map<std::string, double>::const_iterator iter;
	for (iter = dateValuePair.begin(); iter != dateValuePair.end(); iter++)
	{
		std::cout << iter->first << "=" << iter->second << std::endl;
	}
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy)
{
	*this = cpy;
};

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		this->_datafile = rhs._datafile;
	}
	return (*this);
};


BitcoinExchange::~BitcoinExchange(){};