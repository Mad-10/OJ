/*************************************************************************
	> File Name: 180_00.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 10时04分14秒
 ************************************************************************/

#include<stdio.h>
long long Pow(int n) {
    long long base = 2;
    long long ret = 1;
    while(n != 0) {
        if (n & 1 == 1) {
            ret *= base;
        }
        base *= base;
        n >>= 1;
    }
    return ret;
}

int main (void) {
    int n;
    scanf("%d", &n);
    printf("%lld", Pow(n));
    return 0;
}
