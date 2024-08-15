#include <iostream>
#include <string>

using namespace std;

struct pizza
{
    string brand;
    double diameter;
    double weight;
}p1;

int main(void)
{
    cout << "Enter the pizza's brand:";
    getline(cin, p1.brand);
    cout << "Enter the pizza's diameter:";
    cin >> p1.diameter;
    cout << "Enter the pizza's weight:";
    cin >> p1.weight;
    cout << p1.brand << "'s pizza's diameter is " << p1.diameter << ", and its weight is " << p1.weight << endl;
    return 0;
}