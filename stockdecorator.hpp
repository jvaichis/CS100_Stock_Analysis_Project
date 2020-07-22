#ifndef _STOCK_DECORATOR_HPP_
#define _STOCK_DECORATOR_HPP_
#include "stock.hpp"
#include "finishedstock.hpp"
#include <string>
#include <iostream>
#include <vector>


class StockDecorator : public Stock {
private:
Stock* decorator;
public:
StockDecorator(Stock* A) : decorator(A){}

};










#endif