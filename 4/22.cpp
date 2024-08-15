#include <iostream>

struct inflatable
{
    char name[20];
    float value;
    double price;
};

int main(void)
{
    using namespace std;

    inflatable *ps = new inflatable;
    cout << "Enter name of inflatble item: ";
    cin.getline(ps->name, 20);
    cout << "Enter value in cubic feet: ";
    cin >> ps->value;
    cout << "Enter price $: ";
    cin >> ps->price;
    cout << "name = " << ps->name << " , value = " << ps->value << ", price = " << ps->price << endl;
    return 0;
}