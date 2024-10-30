#include <iostream>

using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student *pt, int size);
void display1(student st);
void display2(const student *pt);
void display3(const student *pt, int real_size);

int main(void)
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    if (!cin)
    {
        cin.clear();
        while (cin.get() != '\n');
    }
    student *ptr_stu = new student[class_size];
    
    int entered = getinfo(ptr_stu, class_size);
    
    for (int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete []ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student *pt, int size)
{
    int real_size = 0;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter the #" << i + 1 << " student's name:";
        cin.get();
        cin.getline(pt[i].fullname, SLEN);
        if (pt[i].fullname[0] == ' ')
            break;
        cout << "Enter the #" << i + 1 << " student's hobby:";
        cin >> pt[i].hobby;
        cout << "Enter the #" << i + 1 << " student's ooplevel:";
        cin >> pt[i].ooplevel;
        ++real_size;
    }
    return real_size;
}

void display1(student st)
{
    cout << "I am " << st.fullname
         << " , my hobby is " << st.hobby 
         << " and my opplevel is " << st.ooplevel
         << endl;
}

void display2(const student *pt)
{
    cout << "I am " << pt->fullname
        << " , my hobby is " << pt->hobby 
        << " and my opplevel is " << pt->ooplevel
        << endl;
}

void display3(const student *pt, int real_size)
{
    const student *tmp = pt;
    for (int i = 0; i < real_size; ++i, ++tmp)
    {
        cout << "I am " << tmp->fullname
             << " , my hobby is " << tmp->hobby 
             << " and my opplevel is " << tmp->ooplevel
             << endl;
    }
}