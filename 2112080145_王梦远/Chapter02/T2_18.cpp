/*
 * FileName: T2_18.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Integer comparison
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "请输入两个整数";
    cin >> a >> b;
    if(a==b)
    {
        cout << "These numbers are equal.";
    }
    else
    {
        if(a>b)
        {
            cout << a << " is large.";
        }
        else
        {
            cout << b << " is large.";
        }
    }

    return 0;
}









