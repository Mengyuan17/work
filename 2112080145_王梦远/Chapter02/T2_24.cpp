/*
 * FileName: T2_24.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Odd and even numbers
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "请输入一个整数" << endl;
    cin >> a;
    if(a%2==0)
    {
        cout << "此数为偶数";
    }
    else
    {
        cout << "此数为奇数";
    }
    return 0;
}
