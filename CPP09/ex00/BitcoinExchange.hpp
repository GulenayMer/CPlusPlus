#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <map>


#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"


#define FILE_MISSING "Error : A .txt file is missing"
#define FILE_NOT_OPENED "Error : Failed to open the file "
#define CHECK_FIRST_LINE "Error: First line of file is not 'date | value'."
#define EMPTY_FILE "It is an empty file"
#define BAD_TXT_INPUT "Error: Bad .txt input"
#define TXT_SEP_MISSING "Error: Seperator | in .txt is missing"
#define VALUE_NOT_DIGIT "Error : Value does not contain integers"
#define VALUE_NEGATIVE "Error : Value is negative"
#define VALUE_LARGE "Error : Value is large"
#define _FEB "Error : It is February"
#define _DAY "Error : Day range is wrong"
#define _MONTH "Error : Month range is wrong"
#define _YEAR "Error : Year range is wrong"
#define _SEPARATOR "Error : Separator is wrong"


class BitcoinExchange
{
	private:

		char							*_datafile;

		BitcoinExchange(){};

	public:
		
		BitcoinExchange(char *datafile);
		BitcoinExchange(BitcoinExchange const &cpy);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		std::map<std::string, double>	read_csv_data();
		int								read_txt_file(char *file, std::map<std::string, double> data);
		double							findExchangeRate(std::string date, std::map<std::string, double> data);
		std::string						getPrevDate(std::string &date);
		void							print_data(const std::map<std::string, double> &dateValuePair);
		int								check_value(std::string &value);
		int								check_value2(std::string &value);
		int								check_date(const std::string &date);
		int								errNum;
};


#endif