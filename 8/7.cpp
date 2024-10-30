#include <iostream>

using namespace std;

const string version(const string& a, const string& b);
const string& version2(string& a, const string& b);
const string& version3(const string& a, const string& b);

int main(void)
{    
    cout << "Enter a string:";
    string input;
    getline(cin, input);

    string copy = input;

    cout << "Your string as entered: " << input << endl;

    string result;
    result = version(input, "***");
    cout << "Your stirng enhanced: " << result << endl;
    cout << "Your origin string: " << copy << endl;

    result = version2(input, "###");
    cout << "Your stirng enhanced: " << result << endl;
    cout << "Your origin string: " << copy << endl;

    result = version3(copy, "@@@");
    cout << "Your stirng enhanced: " << result << endl;
    cout << "Your origin string: " << copy << endl;
    return 0;
}

const string version(const string& a, const string& b)
{
    return b + a + b;
}

const string& version2(string& a, const string& b)
{
    return a = b + a + b;
}

const string& version3(const string& a, const string& b)
{
    string* temp;
    *temp = b + a + b;
    return *temp;
}
