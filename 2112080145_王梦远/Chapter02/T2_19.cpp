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
    cout << "������3������\n";
    cin >> a >> b >> c;
    cout << "��" << a+b+c << "\nƽ��ֵ" << (a+b+c)/3 << "\n�˻�" << a*b*c << endl;
    if(a>b)
    {
        d=a;
        if(d>c)
        {
            cout << "���ֵΪ" << d << endl;
            if(b>c)
            {
                cout << "��СֵΪ" << c << endl;
            }
            else
            {
                cout << "��СֵΪ" << b << endl;
            }

        }
    }
    else  //b>a
    {
        f=b;
        if(f>c) //b>c
        {
            cout << "���ֵΪ" << f << endl;
            if(a>c)
            {
                cout << "��СֵΪ" << c << endl;
            }
            else
            {
                cout << "��СֵΪ" << a << endl;
            }
        }
        else  //b<c
        {
            cout << "���ֵΪ" << c << endl;
            cout << "��СֵΪ" << a << endl;
        }


    }

    return 0;
}
