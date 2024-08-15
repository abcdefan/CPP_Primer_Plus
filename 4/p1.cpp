#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    cout << "What is your first name? ";
    char fname[20];
    cin.getline(fname, 20);
    cout << "What is your last name? ";
    string lname;
    cin >> lname;
    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << (char) (grade + 1) << endl;
    cout << "Age: " << age << endl; 
    return 0;
}