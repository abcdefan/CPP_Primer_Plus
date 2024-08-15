#include <iostream>

int main(void)
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    const float Million = 1.0E6;
    cout << "tub = " << tub << endl;
    cout << "A million tubs = " << tub * Million << endl;
    cout << "Ten million tubs = " << tub * Million * 10 << endl;

    double mint = 10.0 / 3.0;
    cout << "mint = " << mint << endl;
    cout << "A million mints = " << mint * Million << endl;
    cout << "Ten million mints = " << mint * Million * 10 << endl;
    return 0;
}