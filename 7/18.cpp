#include <iostream>

using namespace std;

double Rick(int lines);
double Jack(int lines);
void estimate(int lines, double (*pf)(int));

int main(void)
{
    cout << "How many lines of code do you need? ";
    int code;
    cin >> code;
    cout << "Here is Rick's estimate: " << endl;
    estimate(code, Rick);
    cout << "Here is Jack's estimate: " << endl;
    estimate(code, Jack);
    return 0;
}

double Rick(int lines)
{
    return lines * 0.05;
}

double Jack(int lines)
{
    return lines * 0.03 + 0.0004 * lines * lines;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << " lines code will take " << (*pf)(lines) << " seconds.\n";
}