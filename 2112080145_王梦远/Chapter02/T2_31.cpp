/*
 * FileName: T2_31.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate the daily driving cost and output it
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cout << "请输入每天开的总英里数\n";
    cin >> a;
    cout << "\n每加仑汽油的价格";
    cin >> b;
    cout << "\n每加仑汽油可以开的平均英里数";
    cin >> c;
    cout << "\n每日的停车费";
    cin >> d;
    cout << "\n每日的通行费";
    cin >> e;
    f=(a*b)/c+d+e;
    cout << "\n今日开车费用为" << f;
    return 0;
}
