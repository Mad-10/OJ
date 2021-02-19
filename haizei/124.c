/*************************************************************************
	> File Name: 124.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 10时42分05秒
 ************************************************************************/

#include<stdio.h>
typedef struct Interviewer{
    char level;
    int order;
    int age;
    int year;
}Interviewer;

int main(void) {
    Interviewer a;
    scanf("%c %d %d %d", &a.level, &a.order, &a.age, &a.year);
    if ((a.order <= 50 || a.level >= '1') && (a.age <= 25 || a.year >= 5)) {
        printf("ok");
        return 0;
    }
    printf("pass");
    return 0;
}
