#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";
    strcpy(charr1, charr2);
    strcat(charr1, " juice");

    string str1;
    string str2 = "panther";
    str1 = str2;
    str1 += " paste";

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    return 0;
}