#include <iostream>
#include "stock11.h"

Stock::Stock(const std::string& co, long n, double price)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative!" << company << std::endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = price;
    set_total();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
        std::cout << "Number of shares can't be negative! Transaction is aborted! " << company << std::endl;
    else
    {
        shares += num;
        share_val = price;
        set_total();
    }
}

void Stock::sell(long num, double price)
{
    if (num > shares)
        std::cout << "The number of shares which you want to sell excess your obtained! Transaction is aborted! " << company << std::endl;
    else if (num < 0)
        std::cout << "Number of shares can't be negative! Transaction is aborted! " << company << std::endl;
    else
    {
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_total();
}

void Stock::show() const
{
    std::cout << "Company: " << company << std::endl;
    std::cout << "Shares: " << shares << std::endl;
    std::cout << "Share price: " << share_val << std::endl;
    std::cout << "Total worth: " << total_val << std::endl;
}

Stock::~Stock()
{
    std::cout << "Bye! " << company << std::endl; 
}