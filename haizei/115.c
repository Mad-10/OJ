/*************************************************************************
	> File Name: 115.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 18ÈÕ 11£º42
 ************************************************************************/
#include <stdio.h>
#define P1 100
#define P2 20
#define P3 2
#define P4 0
int main (void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b) {
		printf("%d", P1);
		return 0;
	} else if (a % 10 == b / 10 && a / 10 == b % 10) {
		printf("%d", P2);
		return 0;
	} else if (a % 10 == b / 10 || a / 10 == b % 10 || a % 10 == b % 10 || a / 10 == b / 10) {
		printf("%d", P3);
		return 0;
	} else {
		printf("%d", P4);
		return 0;
	}
}
