/*************************************************************************
	> File Name: 119.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月18日 星期四 19时58分00秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#define LEAP(a) ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
int main (void) {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if (day == 1) {
        if (month == 1) {
            printf("%d %d %d\n",year - 1, 12, 31);
            printf("%d %d %d", year, 1, 2);
            return 0;
        } else if (month == 3) {
            if(LEAP(year)) {
                printf("%d %d %d\n", year, 2, 29);
                printf("%d %d %d", year, 3, 2);
                return 0;
            } else {
                printf("%d %d %d\n", year, 2, 28);
                printf("%d %d %d", year, 3, 2);
                return 0;
            }
        } else if (month == 8) {
            printf("%d %d %d\n", year, 7, 31);
            printf("%d %d %d", year, 7, 2);
            return 0;
        } else if (month == 5 || month == 7 || month == 10 || month == 12) {
            printf("%d %d %d\n", year, month - 1, 30);
            printf("%d %d %d", year, month, 2);
            return 0;
        }
    } else if (day == 31) {
        if (month == 12) {
            printf("%d %d %d\n", year, 12, 30);
            printf("%d %d %d", year + 1, 1, 1);
            return 0;
        } else {
            printf("%d %d %d\n", year, month, 30);
            printf("%d %d %d", year, month + 1, 1);
            return 0;
        }
    } else if (day == 30) {
            printf("%d %d %d\n", year, month, 29);
            printf("%d %d %d", year, month + 1, 1);
            return 0;
    } else if (day == 28) {
        if(month == 2 && LEAP(year)) {
            printf("%d %d %d\n", year, 2, 27);
            printf("%d %d %d", year, 2, 29);
            return 0;
        }
    } else if (day == 29) {
        printf("%d %d %d\n", year, month, day - 1);
        printf("%d %d %d", year, 3, 1);
        return 0;
    } else {
        printf("%d %d %d\n", year, month, day - 1);
        printf("%d %d %d", year, month, day + 1);
        return 0;
    }
}
