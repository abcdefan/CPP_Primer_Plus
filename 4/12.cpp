#include <iostream>

using namespace std;

struct inflatable
{
    string name;
    float volume;
    double price;
};

int main(void)
{
    inflatable bouquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;
    choice = bouquet;

    cout << "bouque: " << bouquet.name << " for $" << bouquet.price << endl;
    cout << "bouque: " << choice.name << " for $" << choice.price << endl;

    return 0;
}