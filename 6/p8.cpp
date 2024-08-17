#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    char ch;
    int count = 0;

    ifstream inFile;
    inFile.open("p8.txt");

    while (!inFile.eof())
    {
        inFile >> ch;
        ++count;
    }

    cout << "The file contains " << count << " chars.\n";

    inFile.close();

    return 0;
}