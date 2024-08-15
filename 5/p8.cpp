#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    cout << "Enter words (to stop, type the word done):\n";
    char words[30];
    int count = -1;
    do
    {
        cin >> words;
        ++count;
    } while (strcmp(words, "done"));
    cout << "You enterd a total of " << count << " words" << endl;
    return 0;
}