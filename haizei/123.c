/*************************************************************************
	> File Name: 123.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 09时48分05秒
 ************************************************************************/

#include<stdio.h>
#define Y "YES"
#define N "NO"
int main(void) {
    int a, b, c, d;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    if ((a - c) * (b - d) > 0) {
        printf(N);
    } else {
        printf(Y);
    }
    return 0;
}
