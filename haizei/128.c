/*************************************************************************
	> File Name: 128.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 19时49分12秒
	> Problem:#128
	> Link:http://oj.haizeix.com/problem/128
	> Describe:  读入 n 个整数，计算它们的平均值。

	> Input: 第一行一个整数 n 表示需要读入的整数的数量。（2≤n<1000） 第二行为 n个整数 X1,X2……Xn。（1≤Xn≤10000）
	> Output:  输出一个保留两位小数的浮点数，为 n 个整数的平均数。
	> Input_Demo:   2
                    21 7
	> Output_Demo:  14.00
 ************************************************************************/

#include <stdio.h>
int main (void) {
    int n, num1, num2, i;
    scanf("%d", &n);
    num1 = num2 = i = 0;
    while(i++ < n) {
        scanf("%d", &num1);
        num2 += num1;
    }
    printf("%.2f", num2 * 1.0 / n);
    return 0;
}
