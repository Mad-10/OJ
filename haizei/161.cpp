/*************************************************************************
	> File Name: 161.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 08:59:36 AM CST
 ************************************************************************/

#include<iostream>
#include <math.h>
using namespace std;
int main(void) {
    double x, n;
    cin >> x >> n;
    while (n--) {
        x *= (1 + 0.06);
    }
    printf("%.6f", x);
    return 0;
}
