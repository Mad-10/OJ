/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 19��39
 ************************************************************************/

#include <stdio.h>
int main (void) {
	int a, b, c, t;
	scanf("%d %d %d %d", &a, &b, &c, &t);
	double v = a * b;
	printf("%.2f", (v - (a + b) * t) / (a + b - v / c) + t);
    return 0;
}
