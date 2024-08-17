#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
    cout << "Enter name of data file:";
    string fileName;
    getline(cin, fileName);

    ifstream inFile;
    inFile.open(fileName);

    if (!inFile.is_open())
    {
        cout << "Can not open the file " << fileName << endl;
        cout << "Programme terminating.\n";
        exit(EXIT_FAILURE);
    }
    else
        cout << "Success open the txt file.\n";

    double value, sum = 0;
    int count = 0;

    do
    {
        inFile >> value;
        sum += value;
        ++count;
    } while (inFile.good());

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatched.\n";
    else
        cout << "Input terminated by unknown reason.\n";

    if (count)
    {
        cout << "count = " << count << endl;
        cout << "sum = " << sum << endl;
        cout << "The average score of the " << count << " scores is " << sum / count << endl;
    }
    else
        cout << "No data has been read.\n";
    inFile.close();
    return 0;
}