#include <iostream>

using namespace std;

void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swapv(int a, int b);

int main(void)
{
    int wallet1 = 300, wallet2 = 350;
    cout  << "wallet1 = $" << wallet1 << endl; 
    cout  << "wallet2 = $" << wallet2 << endl; 

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout  << "wallet1 = $" << wallet1 << endl; 
    cout  << "wallet2 = $" << wallet2 << endl; 

    cout << "Using pointers to swap contents:\n";
    swapp(&wallet1, &wallet2);
    cout  << "wallet1 = $" << wallet1 << endl; 
    cout  << "wallet2 = $" << wallet2 << endl; 

    cout << "Using values to swap contents:\n";
    swapv(wallet1, wallet2);
    cout  << "wallet1 = $" << wallet1 << endl; 
    cout  << "wallet2 = $" << wallet2 << endl; 
    return 0;
}

void swapr(int& a, int& b)
{
    int value = b;
    b = a;
    a = value;
}

void swapp(int* a, int* b)
{
    int value = *b;
    *b = *a;
    *a = value;
}

void swapv(int a, int b)
{
    int value = b;
    b = a;
    a = value;
}