#include <iostream>
#include <fstream> // 文件流

using namespace std;

int main(void)
{
    string automobile;
    int year;
    double a_price, d_price;

    cout << "Enter the make and model of automobile:";
    getline(cin, automobile);
    cout << "Enter the model year:";
    cin >> year;
    cout << "Enter the origin asking price:";
    cin >> a_price;
    d_price = a_price * 0.913;

    // show on screen
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model:" << automobile << endl;
    cout << "Year:" << year << endl;
    cout << "Was asking:" << a_price << endl;
    cout << "Now asking:" << d_price << endl;

    // write to carinfo.txt
    ofstream outFile;
    outFile.open("carinfo.txt");

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model:" << automobile << endl;
    outFile << "Year:" << year << endl;
    outFile << "Was asking:" << a_price << endl;
    outFile << "Now asking:" << d_price << endl;

    outFile.close();

    return 0;
}