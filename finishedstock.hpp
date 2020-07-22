#ifndef _FINISHED_STOCK_HPP_
#define _FINISHED_STOCK_HPP_
#include "stock.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class FinishedStock : public Stock{
public:
    virtual void StockComparator() = 0;
private:
    Stock* A;
};

#endif