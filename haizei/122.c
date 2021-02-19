/*************************************************************************
	> File Name: 122.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 09时30分25秒
 ************************************************************************/

#include<stdio.h>
int main(void) {
    int t;
    scanf("%d", &t);
    int h = t / 3600;
    int m = t / 60 % 60;
    int s = t % 60;
    if (h < 12) {
        printf("%02d:%02d:%02d am", h, m, s);
    } else if (h == 12) {
        printf("%02d:%02d:%02d midnoon", h, m, s);
    } else if (h > 12) {
        printf("%02d:%02d:%02d pm", h - 12, m, s);
    }
    return 0;
}
