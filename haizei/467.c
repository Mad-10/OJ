/*************************************************************************
	> File Name: 467.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 09:20:18 AM CST
 ************************************************************************/

#include<stdio.h>
typedef unsigned long long LLU;
LLU fac(int n) {
    LLU result = 1;
    while (n) {
        result *= n--;
    }
    return result;
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%llu", fac(n));
}
