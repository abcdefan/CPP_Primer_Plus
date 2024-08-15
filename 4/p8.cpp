#include <iostream>

using namespace std;

struct pizza
{
    string brand;
    double diameter;
    double weight;
};

int main(void)
{
    pizza* p = new pizza;
    p->diameter = 4.1;
    cout << "Enter the pizza's brand:";
    getline(cin, p->brand);
    cout << "Enter the pizza's weight:";
    cin >> p->weight;
    cout << "pizza's brand is " << p->brand << endl;
    cout << "pizza's diameter is " << p->diameter << endl;
    cout << "pizza's weight is " << p->weight << endl;
    delete p;
    return 0;
}