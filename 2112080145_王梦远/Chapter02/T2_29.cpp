/*
 * FileName: T2_29.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Use tabs to output a numeric table with the following neat format
 */
#include <iostream>

using namespace std;

int main()
{
    int a=0;


    cout << "integer\t" << "square\t" << "cube" <<endl;
    for(int i=0;i<11;i++)
    {

    cout << a <<"\t" << a*a << "\t" << a*a*a << endl;
    a=a+1;
    }

    return 0;
}
