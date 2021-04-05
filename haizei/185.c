/*************************************************************************
	> File Name: 185.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 08:08:29 PM CST
 ************************************************************************/

#include<stdio.h>
typedef unsigned long long LLU;
LLU fa(int n) {
    if (n == 1 || n == 2) return 1;
    return fa(n - 1) + fa(n - 2);
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%llu", fa(n));
    return 0;
}
