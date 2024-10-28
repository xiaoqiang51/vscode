#include <iostream>
using namespace std;

int main()
{
    // sizeof的语法：sizeof(数据类型或者是变量名)
    short num1 = 10;
    cout << "short占用的内存空间为: " << sizeof(short) << endl;
    int num2 = 10;
    cout << "int占用的内存空间为: " << sizeof(int) << endl;
    long num3 = 10;
    cout << "long占用的内存空间为: " << sizeof(num3) << endl;
    long long num4 = 10;
    cout << "long long占用的内存空间为: " << sizeof(num4) << endl;

    cout << "float占用的内存空间为: " << sizeof(float) << endl;
    cout << "double占用的内存空间为: " << sizeof(double) << endl;        
    return 0;
}