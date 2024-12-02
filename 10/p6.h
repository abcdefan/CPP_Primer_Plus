#ifndef __P6_H__
#define __P6_H__

class Move
{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0); //构造函数
        void showmove() const; // 打印当前的x和y
        Move add(const Move& m) const; // 用一个新的move去接受当前的move和m的x合和y合
        void reset(double a = 0, double b = 0);
};

#endif