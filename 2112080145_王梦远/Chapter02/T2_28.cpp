/*
 * FileName: T2_28.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Decompose the digits of a 5-bit integer
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout << "请输入一个五位整数";
    cin >> a ;
    b=a/10000;
    c=a/1000%10;
    d=a/100%10;
    e=a/10%10;
    f=a%10;
    cout << b << "   " << c << "   " << d << "   " << e << "   " << f;
    return 0;
}
