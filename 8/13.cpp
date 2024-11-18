#include <iostream>

using namespace std;

struct job
{
    string name;
    double salary;
    int floor;
};

template <typename T> // 这里没有分号
void Swap(T& a, T& b);
template <> void Swap<job>(job& j1, job& j2);

int main(void)
{
    int i = 10, j = 20;
    float ii = 1.0f, jj = 2.0f;
    Swap(i, j);
    Swap(ii, jj);
    cout << "i = " << i << ", j = " << j << endl;
    cout << "ii = " << ii << ", jj = " << jj << endl;
    job Rick = {"Rick", 1000, 10};
    job Jack = {"Jack", 1100, 11};
    Swap(Rick, Jack); 
    cout << Rick.name << endl << Rick.salary << "\t" << Rick.floor << endl;
    cout << Jack.name << endl << Jack.salary << "\t" << Jack.floor << endl;
    return 0;
}

template <typename T> // 这里没有分号
void Swap(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}

template <> 
void Swap<job>(job& j1, job& j2)
{
    {
        double temp = j2.salary;
        j2.salary = j1.salary;
        j1.salary = temp;
    }
    float temp = j2.floor;
    j2.floor = j1.floor;
    j1.floor = temp;
}
