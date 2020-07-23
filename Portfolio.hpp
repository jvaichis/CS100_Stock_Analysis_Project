#ifndef __PORTFOLIO_HPP__
#define __PORTFOLIO_HPP__
#include "stock.cpp"
#include "CheckStrategy.hpp"
#include "CheckSymbol.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Portfolio{
private:
vector <Stock*> vec;
int counter = 0;
public:
//Portfolio();
//~Portfolio();
bool isEmpty(){
if(counter == 0){
    return true;
}
return false;
}




void AddStock(){
string date, open, high, low, close, volume, symbol;
vector <string> vdate;
vector <string> vopen;
vector <string> vhigh;
vector <string> vlow;
vector <string> vclose;
vector <string> vvolume;
vector <string> vsymbol;
// string file = DO CHECKSYM FUNCTION +"_data.csv";
CheckSymbol cs;
string file = cs.CheckSym();
    ifstream stockData(file);
    if (stockData.is_open()){
        string line;
        getline(stockData,line);    //ignore the first line
        
        while (!stockData.eof()) {
            getline(stockData,date,',');
            vdate.push_back(date);
            getline(stockData,open, ',');
            vopen.push_back(open);
            getline(stockData,high,',');
            vhigh.push_back(high);
            getline(stockData, low, ',');
            vlow.push_back(low);
            getline(stockData,close,',');
            vclose.push_back(close);
            getline(stockData,volume, ',');
            vvolume.push_back(volume);
            getline(stockData,symbol,'\n');
            vsymbol.push_back(symbol);
        }
    }
    else{
        cout << "Unable to open file." << endl;

    }    
    Stock* A = new Stock(vdate,vopen,vhigh,vlow,vclose,vvolume,vsymbol);
    vec.push_back(A);
    counter++;
}




Stock* getStock(int i){
    return vec.at(i);
}

void display(){
for (unsigned i = 0; i < counter; ++i){
cout << "=== STOCK #" << i+1 << " ===" << endl;
vec.at(i)->printStockInformation(1259);
cout << endl;
}

}
void RemoveStock(){
    bool loop = true; 
    int input;
    this->display();
    while (loop) {
    cout << endl << "Select stock to remove: ";
    cin >> input;
    input -= 1;
    if(input >= 0 && input <= counter) {
        vec.erase(vec.begin() +input);
        counter--;
        loop = false;
	this->display();
	cout << "stock removed!";
    }
    else
        cout << "Invalid input!" << endl;
        loop = false;
    }

}


};








#endif
