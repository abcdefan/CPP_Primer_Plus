#include <iostream>
#include <new>

using namespace std;

const int N = 5;
const int BUF = 512;
char buffer[BUF];

int main(void)
{

    double* pd1;
    double* pd2;
    cout << "Calling new and placement new: \n";
    pd1 = new double[N];
    pd2 = new(buffer) double[N];
    for (int i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout << "pd1 = " << pd1 << endl;
    cout << "&buffer = " << (void*)buffer << endl;
    for (int i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << endl;
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "Calling new and placement new a second time: \n";
    double* pd3;
    double* pd4;
    pd3 = new double[N];
    pd4 = new(buffer) double[N];
    for (int i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    for (int i = 0; i < N; i++)
    {
        cout << "pd1: " << pd1[i] << " at " << &pd1[i] << endl;
        cout << "pd2: " << pd2[i] << " at " << &pd2[i] << endl;
        cout << "pd3: " << pd3[i] << " at " << &pd3[i] << endl;
        cout << "pd4: " << pd4[i] << " at " << &pd4[i] << endl;
    }
    delete[] pd1;
    // delete[] pd2;
    // 不能delete指定地址的指针
    delete[] pd3;
    // delete[] pd4;
    // 不能delete指定地址的指针
    return 0;
}