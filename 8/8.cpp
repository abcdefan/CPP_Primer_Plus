#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream& os, double a, const double b[], int size);

int main(void)
{
    fstream outFile;
    const string file = "ep-data.txt";
    // outFile.open(file, ios::app);
    outFile.open(file);
    if(!outFile.is_open())
    {
        cout << "Can not open " << file << ". Bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of your telescope objective in mm: ";
    cin >> objective;

    double eps[5];
    int i = 1;
    for (double& a: eps)
    {
        cout << "EyePieces #" << i++ << ": ";
        cin >> a;
    }

    file_it(cout, objective, eps, 5);
    file_it(outFile, objective, eps, 5);

    cout << "Done!\n";

    return 0;
}

void file_it(ostream& os, double a, const double b[], int size)
{
    os << "Focal length of objective: " << a << endl;
    os << "f.1. eyepieces " << "magnification\n";
    for (int i = 0; i < size; ++i)
        os << b[i] << "\t" << int(a/b[i] + 0.5) << endl;
}