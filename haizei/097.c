/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 17��04
 ************************************************************************/

#include<stdio.h>
int main (void) {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", n * (n + 1) / 2);
    return 0;
}
