/*************************************************************************
	> File Name: 106.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 10时36分00秒
 ************************************************************************/

#include<stdio.h>
double fakefabs(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main (void) {
    double n;
    scanf("%lf", &n);
    printf("%g", fakefabs(n));
    return 0;
}
