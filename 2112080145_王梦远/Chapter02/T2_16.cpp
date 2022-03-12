/*
 * FileName: T2_16.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 4th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: 输入两个数，并输出这两个数的和、乘积、差和商。
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f;

    cout << "请输入两个数";
    cin >> a >> b;
    c=a+b;
    d=a*b;
    e=a-b;
    f=a/b;

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}
