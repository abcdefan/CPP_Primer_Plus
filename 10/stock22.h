#ifndef __STOCK00_H__
#define __STOCK00_H__

#include <string>

class Stock
{
    // 其他cpp文件只有通过public中的方法间接访问private中的内容
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_total()
        {
            total_val = shares * share_val;
        }
    public:
    // 里面放的都是接口函数
        Stock(const std::string& co, long n, double price);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        const Stock topval(const Stock& st) const;
        ~Stock();
};
#endif