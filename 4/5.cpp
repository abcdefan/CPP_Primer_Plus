#include <iostream>

int main(void)
{
    using namespace std;

    char name[20];
    char dessert[20];
    cout << "Enter your name: " << endl;
    cin.get(name, 20).get();
    cout << "Enter your favorite dessert: " << endl;
    cin.get(dessert, 20);
    cout << "I have some delicious " << dessert << " for " << name << "." << endl;  
    return 0;
}