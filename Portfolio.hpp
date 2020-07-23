#ifndef __PORTFOLIO_HPP__
#define __PORTFOLIO_HPP__
#include "Stock.hpp"
#include "CheckStrategy.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Portfolio : public Stock{
private:
vector <Stock*> vec;
int counter = 0;
public:
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
    ifstream stockData(file);
    if (file.is_open()){
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
            getline(stockData,close,',')
            vclose.push_back(close);
            getline(stockData,volume, ',');
            vvolume.push_back(volume);
            getline(stockData,symbol,'\n');
            vsymbol.push_back(symbol);
        }
    else
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
vec.at(i)->printStockInformation(1258);
cout << endl;
}

}
void RemoveStock(int index){
    bool loop = true; 
    int input;
    vec->display();
    while (loop) {
    cout << endl << "Select stock to remove: ";
    cin >> input;
    if (input > 0 && input  >= counter ){
        vec.erase(Portfolio.begin() +input);
        counter--;
        loop = false;
    }
    else
        cout << "Invalid input!" << endl;
        loop = false;
    }

}


};








#endif
