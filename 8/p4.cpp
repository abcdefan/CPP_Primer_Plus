#include <iostream>

using namespace std;

struct stringy
{
    string str;
    int ct;
};

void set(stringy& sty, string s);

template <typename T>
void show(T a, int times = 1);

template <> void show(stringy sty, int times);

int main(void)
{
    stringy beany;
    string testing = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy& sty, string s)
{
    sty.str = s;
}

template <typename T>
void show(T a, int times)
{
    while (times--)
        cout << a << endl;
}

template <> void show(stringy sty, int times)
{
    while (times--)
        cout << sty.str << endl;
}