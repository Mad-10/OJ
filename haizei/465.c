/*************************************************************************
	> File Name: 465.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 01:56:35 PM CST
 ************************************************************************/

#include<stdio.h>
typedef unsigned long long LLU;
LLU digit(LLU n, int k) {
    while (--k) {
        n /= 10;
    }
    return n % 10;
}
int main (void) {
    LLU n;
    int k;
    scanf("%llu %d", &n, &k);
    printf("%llu", digit(n, k));
    return 0;
}
