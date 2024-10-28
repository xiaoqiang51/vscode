#include <iostream>
using namespace std;

int main()
{
    //1.单精度 float
    //2.双精度 double
    //默认情况下 输出一个小数，会显示出6位有效数字

    float f1 = 3.14f;//不加f会被默认为double的

    //科学计数法
    float f2 = 3e2; //表示 3*10^2;
    float f3 = 3e-2;//表示 3*0.1^2;

    return 0;
}