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
    cout << "������ÿ�쿪����Ӣ����\n";
    cin >> a;
    cout << "\nÿ�������͵ļ۸�";
    cin >> b;
    cout << "\nÿ�������Ϳ��Կ���ƽ��Ӣ����";
    cin >> c;
    cout << "\nÿ�յ�ͣ����";
    cin >> d;
    cout << "\nÿ�յ�ͨ�з�";
    cin >> e;
    f=(a*b)/c+d+e;
    cout << "\n���տ�������Ϊ" << f;
    return 0;
}
