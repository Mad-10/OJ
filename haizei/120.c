/*************************************************************************
	> File Name: 120.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 07时54分09秒
 ************************************************************************/

#include<stdio.h>
#define Month1(a) (a == 2)
#define Month2(a) (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
#define Month3(a) (a == 4 || a == 6 || a == 9 || a == 11)
#define LEAP(a) ((a % 100 != 0 && a % 4 == 0) || a % 400 == 0)
#define Y "YES"
#define N "NO"
int main (void) {
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if(month < 1 || month > 12) {
        printf(N);
    } else if (Month1(month)) {
        if(day == 29) {
            if(LEAP(year)) {
                printf(Y);
            } else {
                printf(N);
            }
        } else if (day >= 1 && day <= 28) {
            printf(Y);
        } else {
            printf(N);
        }
    } else if (Month2(month)) {
        if(day > 31 || day < 1) {
            printf(N);
        } else {
            printf(Y);
        }
    } else if (Month3(month)) {
        if (day < 1 || day > 30) {
            printf(N);
        } else {
            printf(Y);
        }
    }
    return 0;
}
