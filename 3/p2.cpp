#include <iostream>
const int FOOT_PER_INCHE = 12;
const float INCHE_PER_MILE = 0.0254f;
const float KG_PER_POUND = 2.2f;

int main(void)
{
    using namespace std;

    int feet, inche, pound;
    cout << "请输入你的身高是多少英尺多少英寸，你的体重是多少磅：";
    cin >> feet >> inche >> pound;
    float height = (feet * FOOT_PER_INCHE + inche) * INCHE_PER_MILE;
    float weight = pound / KG_PER_POUND;
    float BMI = weight / (height * height);
    cout << "你的BMI值是：" << BMI << endl;

    return 0;
}