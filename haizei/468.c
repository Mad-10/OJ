/*************************************************************************
	> File Name: 468.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 09:17:11 AM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int m, int n) {
    if (!n) return m;
    return gcd(n, m % n);
}
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", gcd(m, n));
    return 0;
}
