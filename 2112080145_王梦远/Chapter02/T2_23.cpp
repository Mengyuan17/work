/*
 * FileName: T2_23.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Maximum and minimum integers
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,f,q,w,t,y;
    cout << "请输入5个整数" << endl;
    cin >> a >> b >> c >> q >> w;
    if(a>b)
    {

        if(a>c)
        {

            d=a;
            if(b>c)
            {

                f=c;
            }
            else
            {

                f=b;
            }

        }
    }
    else  //b>a
    {
        ;
        if(b>c) //b>c
        {

            d=b;
            if(a>c)
            {

                f=c;
            }
            else
            {

                f=a;
            }
        }
        else  //b<c
        {

            d=c;

            f=a;
        }


    }
    if(q>w)
    {
        t=q;
        y=w;
    }
    else
    {
        t=w;
        y=q;
    }
    if(d>t)
    {
        cout << "最大数为" << d << endl;

    }
    else
    {
        cout << "最大数为" << t << endl;
    }
    if(f>y)
    {
        cout << "最小数为" << y << endl;
    }
    else
        cout << "最小数为" << f << endl;

    return 0;
}
