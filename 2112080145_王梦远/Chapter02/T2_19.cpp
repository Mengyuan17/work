/*
 * FileName: T2_19.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Arithmetic operation Find the maximum number and the minimum number
 */

#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,f;
    cout << "请输入3个整数\n";
    cin >> a >> b >> c;
    cout << "和" << a+b+c << "\n平均值" << (a+b+c)/3 << "\n乘积" << a*b*c << endl;
    if(a>b)
    {
        d=a;
        if(d>c)
        {
            cout << "最大值为" << d << endl;
            if(b>c)
            {
                cout << "最小值为" << c << endl;
            }
            else
            {
                cout << "最小值为" << b << endl;
            }

        }
    }
    else  //b>a
    {
        f=b;
        if(f>c) //b>c
        {
            cout << "最大值为" << f << endl;
            if(a>c)
            {
                cout << "最小值为" << c << endl;
            }
            else
            {
                cout << "最小值为" << a << endl;
            }
        }
        else  //b<c
        {
            cout << "最大值为" << c << endl;
            cout << "最小值为" << a << endl;
        }


    }

    return 0;
}
