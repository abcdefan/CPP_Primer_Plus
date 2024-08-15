#include <iostream>

int main(void)
{
    using namespace std;

    cout << "What year was house built?" << endl;
    int year;
    cin >> year;
    cout << "What is its street address?" << endl;
    char address[80];
    // cin >> address;
    cin.get();
    cin.getline(address, 80);
    cout << "Your built: " << year << endl;
    cout << "Its address: " << address << endl;
    return 0;
}