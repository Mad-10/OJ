/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 17ÈÕ 21£º34
 ************************************************************************/
#include <stdio.h>
#define class1(a) (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
#define class2(a) (a == 4 || a == 6 || a == 9 || a == 11)
#define class3(a) (a == 2)
#define leap(a) ((a % 100 != 0 && a % 4 == 0) || a % 400 == 0)
#define day1 31
#define day2 30
#define day3 28
#define day4 29
int main (void) {
	int year, month;
	scanf("%d %d", &year, &month);
	if(class3(month)) {
		if(leap(year)) {
			printf("%d", day4);
			return 0;
		}
		printf("%d", day3);
		return 0;
	} if (class1(month)) {
		printf("%d", day1);
		return 0;
	} if (class2(month)) {
		printf("%d", day2);
		return 0;
	}
}
