/*************************************************************************
	> File Name: 165.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Fri 12 Mar 2021 07:05:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int right_triangle(unsigned long long c) {
    unsigned long long a, b;
    int count = 0;
    for (a = 1; 2.0 * a < c * sqrt(2); a++) {
        b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) {
            //printf("a = %llu, b = %llu\n", a, b);
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
