#include <iostream>
using namespace std;

int main(void)
{
    cout << "Enter words (to stop, type the word done):\n";
    string words;
    int count = -1;
    do
    {
        cin >> words;
        ++count;
    } while (words != "done");
    cout << "You enterd a total of " << count << " words" << endl;
    return 0;
}