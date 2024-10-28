#include <iostream>
using namespace std;

int main()
{

    short num1 = 10;     // 2个字节
    int num2 = 10;       // 4个字节
    long num3 = 10;      // Windows为4个字节，Linux为4个字节（32位），8个字节（64位）0
    long long num4 = 10; // 8个字节

    return 0;
}