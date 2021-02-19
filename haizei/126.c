/*************************************************************************
	> File Name: 126.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 18时27分11秒
	> Problem:#126
	> Link:http://oj.haizeix.com/problem/126
	> Describe:  有一个大圆半径为 r1，在它的中间抠掉一个半径为 r2 的小圆，求剩下的圆环的面积。
 ************************************************************************/

#include <stdio.h>
#define PI 3.14
int main (void) {
    double r1, r2;
    scanf("%lf %lf", &r1, &r2);
    printf("%.2f", PI * (r1 *r1 - r2 * r2));
    return 0;
}
