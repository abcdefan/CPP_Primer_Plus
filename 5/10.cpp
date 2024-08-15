#include <iostream>

using namespace std;

int main(void)
{
    cout << "Enter a word: ";
    string word;
    cin >> word;
    for (int i = 0, j = word.size() - 1; i < j; i++, j--)
        swap(word[i], word[j]);
    cout << word << endl;
    return 0;
}