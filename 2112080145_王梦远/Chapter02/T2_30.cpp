/*
 * FileName: T2_30.cpp
 * Author:   Mengyuan Wang
 * E-mail:   486242207@qq.com
 * Date:     Mar 12th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function: Calculate and display the user's body mass index
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,BMI;
    cout << "请输入你的体重和身高\n";
    cin >> a >> b;
    BMI=a/(b*b);
    if(BMI<18.5)


    {
        cout << "BMI=" << BMI << endl;
        cout << "Underweight";
    }
    else
        if(BMI<=24.9)
    {
        cout << "BMI=" << BMI << endl;
         cout << "Normal";
    }
    if(BMI>=25&&BMI<=29.9)
    {
        cout << "BMI=" << BMI << endl;
        cout << "Overweight";
    }
    if(BMI>=30)
    {
        cout << "BMI=" << BMI << endl;
        cout << "Obese";
    }

    return 0;
}
