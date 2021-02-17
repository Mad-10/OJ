/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 17ÈÕ 20£º13
 ************************************************************************/
#include <stdio.h>
#define LIMIT 15
#define P1 6
#define P2 9
int main (void) {
	double x;
	scanf("%lf", &x);
	printf("%.2f", (x > LIMIT) ? ((x - LIMIT) * P2 + LIMIT * P1) : (x * P1));
    return 0;
}
