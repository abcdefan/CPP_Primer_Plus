#ifndef __P3_H__
#define __P3_H__

class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf(const char* name, int hc);
        void setgolf();
        void sethandicap(int hc);
        void showgolf() const;
};

#endif