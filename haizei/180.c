/*************************************************************************
	> File Name: 180.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月16日 星期二 21时33分46秒
 ************************************************************************/

#include<stdio.h>
unsigned long long QPow(int base, int exp) {
    unsigned long long ret = 1;
    if (exp == 0) {
        return ret;
    } else if (exp & 1 == 1) {
        ret *= base;
        exp -=  1;
        ret *= QPow(base, exp);
        return ret;
    } else {
        exp >>= 1;
        ret *= (QPow(base, exp) * QPow(base, exp));
    }
}

int main (void) {
    int n;
    scanf("%d", &n);
    printf("%llu", (QPow(2, n)));
    return 0;
}

