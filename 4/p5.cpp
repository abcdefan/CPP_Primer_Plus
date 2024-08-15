#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main(void)
{
    using namespace std;
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "snack.brand = " << snack.brand << endl;
    cout << "snack.weigt = " << snack.weight << endl;
    cout << "snack.calorie = " << snack.calorie << endl; 
    return 0;
}