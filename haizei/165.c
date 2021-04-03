/*************************************************************************
	> File Name: 165.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Fri 12 Mar 2021 07:05:23 PM CST
 ************************************************************************/
/*
 *  方法一：从1到c枚举，验证a和b的平方和是否等于c的平方
 *  方法二：从1到0.5 * sqrt（2） * c 验证a和b的平方和是否为c的平方（直径所对圆周角为90度/当三角形为等腰直角三角形时，直角边相等）
*/
#include<stdio.h>
#include <math.h>
int right_triangle(unsigned long long c) {
    unsigned long long a, b;
    int count = 0;
    for (a = 1; 2.0 * a < c * sqrt(2); a++) {
        b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) {
            count++;
        }
    }
    return count;
}

int main (void) {
    unsigned long long c;
    scanf("%llu", &c);
    printf("%d", right_triangle(c));
    return 0;
}
