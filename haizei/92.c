/*************************************************************************
	> File Name: 92.c
	> Author:AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 13时30分00秒
 ************************************************************************/

#include<stdio.h>
#define PI 3.14
int main (void) {
    double r;
    scanf("%lf", &r);
    printf("%.2f\n", 2 * PI * r);
    printf("%.2f", PI * r * r);
    return 0;
}
