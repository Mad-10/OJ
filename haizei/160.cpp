/*************************************************************************
    > File Name: 160.cpp
    > Author: AlanIvan
    > Mail: 2728946156@qq.com
    > PhoneNumver: 18238908590
    > Created Time: Fri 02 Apr 2021 10:19:33 PM CST
 ************************************************************************/

#include<iostream>
#include <math.h>
#define PI 3.14
using namespace std;
int main(void) {
    double r, h;
    cin >> r >> h;
    double s1 = PI * r * r;
    double s2 = 4 * r * r;
    double s3 = PI * r * h;
    double s4 = 2 * r * h;
    double s5 = 2 * sqrt(2) * r * h;
    printf("%.2f", s1 + s2 + s3 + s4 + s5);
    //cout << s1 + s2 + s3 + s4 + s5;
    return 0;
}
