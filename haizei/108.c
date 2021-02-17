/*************************************************************************
	> File Name: 108.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 13时15分46秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    double m, n;
    char ch;
    scanf("%c", &ch);
    scanf("%lf %lf", &m, &n);
    printf("%.2f", ((ch == 'r') ? (1.0) : (0.5) ) * m * n);
    return 0;
}
