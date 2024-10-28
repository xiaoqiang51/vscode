#include <iostream>
using namespace std;

#define DAY (7)

/*
    这是个多行注释
    main是函数入口
*/
int main()
{
    // 常量的定义方式
    // 1. #define 宏常量
    cout << "一周总共有：" << DAY << endl;
    // 2. const 修饰的变量
    const int month = 12;
    cout << "一年总共有：" << month << "个月" << endl;
}