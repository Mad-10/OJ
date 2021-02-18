/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 17ÈÕ 17£º10
 ************************************************************************/

#include<stdio.h>
#define PI 3.14
int main (void) {
	double r, h;
	scanf("%lf %lf", &r, &h);
	printf("%.2lf\n%.2lf", (((int)(PI * r * r * 100 + 0.55)) * 0.01), (((int)(PI * r * r * h * 100 + 0.55)) * 0.01));
    return 0;
}
