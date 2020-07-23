#ifndef __STOCK_HPP__
#define __STOCK_HPP__
#include <cmath>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;
class Stock{
	private:
		vector<string> date;
		vector<string> open;
		vector<string> high;
		vector<string> low;
		vector<string> close;
		vector<string> volume;
		vector<string> symbol;
	public:
		Stock(vector<string>,vector<string>,vector<string>,vector<string>,vector<string>,vector<string>,vector<string>);
		double getStockPrice();
		bool isValidDate(string);
		bool isValidSymbol(string);
		string getDate(int);
		double getOpen(int);
		double getHigh(int);
		double getLow(int);
		double getClose(int);
		double getVolume(int);
		void printStockInformation(int);
		double getPercentageChange(int, int);
		double getPercentageChange(int);
		string getSymbol(int);
		void readStock();
};
#endif
