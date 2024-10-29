#include <iostream>
using namespace std;

int main()
{
    // 1.字符型变量的创建方式
    char ch = 'a';
    cout << ch << endl;

    // 2.字符型变量所占内存大小
    cout << "char字符型变量所占内存: " << sizeof(char) << endl;

    // 3.字符型变量常见错误
    char ch1 = "b"; //创建字符型变量时候，要用单引号
    char ch2 = 'addadad'; //创建字符型变量时候，单引号内只能有以一个字符

    // 4.字符型变量对应的ASCII值
    cout << (int)ch << endl;

    return 0;
}