/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 17��10
 ************************************************************************/

#include<stdio.h>
#define PI 3.14
int main (void) {
	double v, a;
	scanf("%lf %lf", &v, &a);
	printf("%.2lf", (((int)(v * v / a / 2 * 100 + 0.50)) * 0.01));
    return 0;
}
