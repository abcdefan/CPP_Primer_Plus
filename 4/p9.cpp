#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main(void)
{
    CandyBar *p = new CandyBar[3];
    p[0].brand = "a";
    p[0].weight = 1.1;
    p[0].calorie = 1;
    p[1].brand = "b";
    p[1].weight = 2.2;
    p[1].calorie = 2;
    p[2].brand = "c";
    p[2].weight = 3.3;
    p[2].calorie = 3;
    delete []p;
    return 0;
}