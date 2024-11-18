#include <iostream>
#include <cctype>
using namespace std;

string toupper(string& str);

int main(void)
{
    string str;
    cout << "Enter a string to str: ";
    getline(cin, str);
    while(str != "q")
    {
        cout << toupper(str) << endl;
        cout << "Next string (q to quit):";
        getline(cin, str);
    }
    cout << "Bye." << endl;
    return 0;
}

// string toupper(string& str)
// {
//     for (int i = 0; i < str.size(); ++i)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] += 'A' - 'a';
//     }
//     return str;
// }

string toupper(string& str)
{
    for (int i = 0; i < str.size(); ++i)
        str[i] = toupper(str[i]);
    return str;
}