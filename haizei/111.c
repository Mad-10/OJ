/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 21��12
 ************************************************************************/
#include <stdio.h>
#define LIMIT 3
#define P1 13
#define P2 2.3
#define C 1
int main (void) {
	int x;
	scanf("%d", &x);
	printf("%g", ((x > LIMIT) ? ((x - LIMIT) * P2 + P1) : (P1)) + 1);
    return 0;
}
