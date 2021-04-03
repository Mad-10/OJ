/*************************************************************************
	> File Name: 163.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 09:11:26 AM CST
 ************************************************************************/

#include<iostream>
#include <math.h>
using namespace std;

int main(void) {
    double a, b, rad;
    cin >> a >> b >> rad;
    rad = rad / 180.0 * acos(-1);
    printf("%.6f", sqrt(a * a + b * b - 2 * a * b * cos(rad)));
    return 0;
}
