/*************************************************************************
	> File Name: 125.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 11时05分54秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    int h, m, s, t;
    scanf("%d %d %d %d", &h, &m, &s, &t);
    h = (h + t / 3600);
    m = (m + t / 60 % 60);
    s = (s + t % 60);
    while (m >= 60 || s >= 60) {
        if (m >= 60) {
            m -= 60;
            h += 1;
        }
        if (s >= 60) {
            m += 1;
            s -= 60;
        }
    }
    if (h == 0 || h == 24 || h == 48) {//零点
        printf("%d:%d:%dam\n", 12, m, s);
    } else if ((h > 1 && h < 12) || (h > 24 && h < 36)) {//上午
        printf("%d:%d:%dam\n", h % 24, m, s);
    } else if (h == 12 || h == 36) {//中午
        printf("%d:%d:%dpm\n", h % 24, m, s);
    } else if ((h > 12 && h < 24) || (h > 36 && h < 48)){
        printf("%d:%d:%dpm\n", h % 12, m, s);
    }
    printf("%.2lf%%", (t * 100.0 / 86400.0));
    return 0;
}
