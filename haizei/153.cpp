/*************************************************************************
	> File Name: 153.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 04 Apr 2021 12:04:38 PM CST
 ************************************************************************/
/**
*h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) mod 7
*h:一个星期中的某一天（0为周六， 1为周日， 2为周一....6为周五）
*q:某月的第几天 q = day
*m:月份m = month (3 为三月， 4为四月， 一月二月为上一年的13月和14月)
*j = year / 100
*k = year % 100
* */
#include<iostream>
using namespace std;

int months[3] = {0, 13, 14};
int week[7] = {6, 7, 1, 2, 3 ,4, 5};
int main(void) {
    int year, month, day;
    cin >> year >> month >> day;
    int q = day;
    int m = month;
    if (month == 1 || month == 2) {
        m = months[month];
        year -= 1;
    }
    int j = year / 100;
    int k = year % 100;
    cout << week[(q + 26 * (m + 1) /  10 + k + k / 4 + j / 4 + 5 * j) % 7];
    return 0;
}
