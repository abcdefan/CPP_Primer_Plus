#ifndef __P7_H__
#define __P7_H__
#include <iostream>

class Plorg
{
    private:
        static const int Max = 20;
        char fullname[Max];
        int CI;
    public:
        Plorg(std::string s = "Plorga");
        void alterCI(int c);
        void show() const;
};
#endif