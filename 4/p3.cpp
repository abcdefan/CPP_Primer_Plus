#include <iostream>

int main(void)
{
    using namespace std;

    char fname[20];
    char lname[20];
    cout << "Enter your first name: ";
    cin >> fname;
    cout << "Enter your last name: " ;
    cin >> lname;
    strcat(lname, ", ");
    strcat(lname, fname);
    cout << "Here's the information in a single string: " << lname << endl;
    return 0;
}