#include <iostream>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];

int main(void)
{
    chaff* pt1 = new chaff[2];
    chaff* pt2 = new(buffer)chaff[2];
    string input;
    int value;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter a string to the dross:";
        getline(cin, input);
        strncpy(pt1[i].dross, input.c_str(), 19);
        strncpy(pt2[i].dross, input.c_str(), 19);
        pt1[i].dross[19] = '\0';
        pt2[i].dross[19] = '\0';
        cout << "Enter a value to the slag:";
        cin >> value;
        pt1[i].slag = pt2[i].slag = value;
        cin.get(); // 去除掉换行符给上面的getline护航
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "pt1[" << i << "]:" << &pt1[i] << pt1[i].dross << "\t" << pt1[i].slag << endl;
        cout << "pt2[" << i << "]:" << &pt2[i] << pt2[i].dross << "\t" << pt2[i].slag << endl;
    }
    delete[] pt1;
    pt1 = nullptr;
    return 0;
}
 