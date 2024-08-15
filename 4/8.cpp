#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a stirng object.\n";
    s2 = "buzzard"; 
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + " " + s2;
    cout << "s3: " << s3 << endl;
} 