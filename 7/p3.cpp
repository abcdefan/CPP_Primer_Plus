#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box b);
void update(box *b);
void use_func(void (*pshow)(box a), void (*pupdate)(box *a), box &a);

int main(void)
{
    // 题a
    box b1 = {"b1", 1.1, 2.2, 3.3, 1.1 * 2.2 * 3.3};
    show(b1);
    // 题b
    box b2 = {"b2", 1.2, 2.3, 3.4, 0};
    show(b2);
    update(&b2);
    show(b2);
    // 题c
    box b3 = {"b3", 1, 2, 3, 0};
    use_func(show, update, b3);
    show(b3);
    return 0;
}

void show(box b)
{
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
    cout << b.volume << endl;
    cout << "————————\n";
}

void update(box *b)
{
    b->volume = b-> height * b-> width * b->length;
}

void use_func(void (*pshow)(box a), void (*pupdate)(box *a), box &a)
{
    (*pshow)(a);
    (*pupdate)(&a);
}

