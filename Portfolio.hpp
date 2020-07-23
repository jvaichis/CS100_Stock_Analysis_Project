#ifndef __PORTFOLIO_HPP__
#define __PORTFOLIO_HPP__
#include "Stock.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Portfolio : public Stock{
private:
vector <Stock*> Portfolio;
int counter = 0;
public:

void AddStock(Stock* A){
    Portfolio.push_back(A);
    counter++;
}

void display(){
for (unsigned i = 0; i < counter; ++i){
cout << "=== STOCK #" << i+1 << " ===" << endl;
Portfolio.at(i)->printStockInformation(1258);
cout << endl;
}

}
void RemoveStock(int index){
    bool loop = true; 
    int input;
    Portfolio->display();
    while (loop) {
    cout << endl << "Select stock to remove: ";
    cin >> input;
    if (input > 0 && input  >= counter ){
        Portfolio.erase(Portfolio.begin() +input);
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