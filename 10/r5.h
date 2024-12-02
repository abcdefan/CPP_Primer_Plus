#ifndef __R5_H__
#define __R5_H__
#include <iostream>

class Bank
{
    private:
        std::string name;
        std::string account;
        double balance;
    public:
        Bank(std::string n, const std::string a, double b = 0);
        void show() const;
        void save(double money);
        void withdraw(double money);
        ~Bank();
};

#endif