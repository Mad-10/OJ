/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 19��22
 ************************************************************************/

#include <stdio.h>
#define r 0.00417
int main (void) {
	double n;
	scanf("%lf", &n);
	double result = 0;
	for (int i = 0; i < 6; i++) {
		result = (result + n) * (1 + r);
	}
	printf("$%.2f", result);
    return 0;
}
