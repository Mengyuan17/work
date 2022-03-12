/*
 * FileName: T2_25.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Multiple problem
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    if(a%b==0)
    {
        cout << "第一个数是第二个数的倍数";
    }
    else
    {
        cout << "第一个数不是第二个数的倍数";
    }

    return 0;
}
