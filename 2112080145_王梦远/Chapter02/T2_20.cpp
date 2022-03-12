/*
 * FileName: T2_20.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Diameter, circumference and area of a circle
 */
#include <iostream>

using namespace std;

int main()
{

    int r;
    cout << "请输入圆的半径r\n";
    cin >> r;
    cout << "直径 " << r*2 << "\n周长 " << r*2*3.14159 << "\n面积 "<< r*r*3.14159;

    return 0;
}
