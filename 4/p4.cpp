#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string fname, lname;
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: " ;
    cin >> lname;
    string name = lname + ", " + fname;
    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}