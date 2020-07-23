#include "stock.hpp"
#include <cmath>
#include <vector>
#include <string>
#include "readcsv.h"
using namespace std;

Stock::Stock(string fileName){
	CSVReader csv = CSVReader(fileName);
	vector<vector<string>> data = csv.getData();
	date = data.at(0);
	open = data.at(1);
	high = data.at(2);
	low = data.at(3);
	close = data.at(4);
	volume = data.at(5);
	symbol = data.at(6);
}

bool Stock::isValidDate(string dat){
	for(unsigned i = 0; i < date.size(); i++){
		if(dat == date.at(i)){
			return true;
		}
	}
	return false;
}

bool Stock::isValidSymbol(string sym){
	for(unsigned i = 0; i < date.size(); i++){
		if(sym == symbol.at(i)){
			return true;
		}
	}
	return false;
}

double Stock::getStockPrice(){
	double d1 = stod(close.at(close.size()-1));
	return d1;
}

double Stock::getPercentageChange(int day1, int day2){
	double d1 = stod(close.at(day1));
	double d2 = stod(close.at(day2));
	double percentage = d2/d1;
	return percentage;
}

double Stock::getPercentageChange(int day){
	double d1 = stod(open.at(day));
        double d2 = stod(close.at(day));
	double percentage = d2/d1;
	return percentage;
}

string Stock::getDate(int day){
	return date.at(day);
}

double Stock::getOpen(int day){
	double info = stod(open.at(day));
	return info;
}

double Stock::getHigh(int day){
	double info = stod(high.at(day));
	return info;
}

double Stock::getLow(int day){
	double info = stod(low.at(day));
	return info;
}

double Stock::getClose(int day){
	double info = stod(close.at(day));
	return info;
}

double Stock::getVolume(int day){
	double info = stod(volume.at(day));
	return info;
}


string Stock::getSymbol(int day){
	return symbol.at(day);
} 


void Stock::printStockInformation(int day) {
 cout << "=== " << this->getSymbol(day) << " ===" << endl;
    cout << "DATE  ||  SYMBOL  ||  OPEN  ||  CLOSE  ||  HIGH  ||  LOW  || VOLUME  ||  " << endl;
    cout << this->getDate(day) << "    " << this->getSymbol(day) << "    " << this->getOpen(day) << "    " << this->getClose(day) << "    "
    << this->getHigh(day) << "    " << this->getLow(day) << "    " << this->getVolume(day) << endl; 
cout << "=====================================================================================" << endl;
}

















