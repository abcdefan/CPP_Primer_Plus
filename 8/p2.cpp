#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

void set(CandyBar& cb, string b = "Millennium", double w = 2.85, int c = 350);
void show(const CandyBar cb);

int main(void)
{
    CandyBar cb;
    set(cb, "RainBow Candy", 11.1, 100);
    set(cb);
    return 0;
}

void set(CandyBar& cb, string b, double w, int c)
{
    cb.brand = b;
    cb.weight = w;
    cb.calorie = c;
    show(cb);
}

void show(const CandyBar cb)
{
    cout << "Brand Name: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calorie: " << cb.calorie << endl; 
}