#include <iostream>

using namespace std;

const double* f1(const double *ar, int n);
const double* f2(const double ar[], int n);
const double* f3(const double *ar, int n);

int main(void)
{
    double av[3] = {1112.3, 1542.6, 2227.9};

    // part1
    // 定义函数指针
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    cout << "PATR1:-------------------\n";
    cout << "Address      Value" << endl;
    cout << (*p1)(av, 3) << ": "<< *(*p1)(av, 3) << endl; // cout << f1(av, 3);
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl; // cout << f1(av, 3);
    const double* (*p3)(const double *, int) = f3;

    // part2
    cout << "PATR2:-------------------\n";
    cout << "Address      Value" << endl;
    const double *(*pa[3])(const double *, int) = {p1, p2, p3};
    auto pb = pa; // pb是指向pa[0]的指针
    for (int i = 0; i < 3; ++i)
        cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;

    // part3
    cout << "PATR3:-------------------\n";
    cout << "Address      Value" << endl;
    auto pc = &pa; // pc是指向pa整个数组的指针
    const double *(*(*pd)[3])(const double *, int) = &pa;
    // *pd 首先pd是一个指针
    // (*pd)[3] 这个指针中有三个元素
    // *(*pd)[3] 指针中的三个元素每个都是指针类型
    // const double *(*(*pd)[3])(const double *, int) 指针中的三个元素都是函数指针 const double* (*(*pd)[3])
    for (int i = 0; i < 3; ++i)编程实践作业:60%(20%X3次，最后一次作为大作业)
        cout << (*pc)[i](av, 3) << ": " << *(*pc)[i](av, 3) << endl; // (*pc) = pa
    
    return 0;
}

const double* f1(const double *ar, int n)
{
    return ar;
}

const double* f2(const double ar[], int n)
{
    return ar + 1;
}

const double* f3(const double *ar, int n)
{
    return ar + 2;
}