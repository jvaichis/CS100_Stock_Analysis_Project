#ifndef _SINGLESTOCK_HPP_
#define _SINGLESTOCK_HPP_
#include "stock.hpp"
#include "finishedstock.hpp"
#include "stockdecorator.hpp"
#include <string>
#include <iostream>
#include <vector>

class SingleStock : public FinishedStock{

public: 
void StockComparator(){
    this->printStockInfo();
}

};



#endif