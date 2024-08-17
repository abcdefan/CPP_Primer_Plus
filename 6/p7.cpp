#include <iostream>

using namespace std;

int main(void)
{
    string word;
    cout << "Enter words (q to quit):\n";
    int vword = 0, cword = 0, others = 0;
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0]))
            switch (word[0])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                ++vword;
                break;
            default:
                ++cword;
            }
        else
            ++others;
    }

    cout << vword << " words beginning with vowels\n";
    cout << cword << " words beginning with consonants\n";
    cout << others << " others\n";
    return 0;
}