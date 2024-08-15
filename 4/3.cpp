#include <iostream>
#include <cstring>
int main(void)
{
    using namespace std;
    char name[7];
    char dessert[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "name的长度是： " << strlen(name) << endl;
    cout << "name的大小是： " << sizeof(name) << endl;
    cout << "Enter your favourite dessert: " << endl;
    cin >> dessert;
    cout << "dessert的长度是： " << strlen(dessert) << endl;
    cout << "dessert的大小是： " << sizeof(dessert) << endl;
    cout << "I have some delicious " << dessert << " for " << name << "." << endl;
    return 0;
}