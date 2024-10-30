#include <iostream>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accmulate(free_throws& target, const free_throws& source);

int main(void)
{
    free_throws one = {"Ifelas Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    set_pc(one);
    display(one);
    set_pc(two);
    display(two);
    set_pc(three);
    display(three);
    set_pc(four);
    display(four);
    set_pc(five);
    display(five);

    accmulate(team, one);
    accmulate(team, two);
    accmulate(team, three);
    accmulate(team, four);
    display(accmulate(team, five));

    return 0;
}

void display(const free_throws& ft)
{
    cout << "name = " << ft.name << endl;
    cout << "made = " << ft.made << "\t";
    cout << "attempts = " << ft.attempts << "\t";
    cout << "percent = " << ft.percent << endl;
}

void set_pc(free_throws& ft)
{
    ft.percent = (float)ft.made / ft. attempts * 100;
}

free_throws& accmulate(free_throws& target, const free_throws& source)
{
    target.made += source.made;
    target.attempts += source.attempts;
    set_pc(target);
    return target;
}