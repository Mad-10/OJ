/*************************************************************************
	> File Name: 129.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 20时17分33秒
	> Problem:#129
	> Link:http://oj.haizeix.com/problem/129
	> Describe: 读入 n 个整数，找出其中最小的数。

	> Input:  第一行一个整数 n 表示需要读入的整数的数量。（2≤n<1000）第二行为 n 个整数 X1,X2……Xn。（1≤Xn≤10000）
	> Output: 输出 n 个整数中最小的数。
	> Input_Demo:   5
                    38 59 26 30 48
	> Output_Demo: 26
 ************************************************************************/

#include <stdio.h>
int main(void) {
    int n, min, num;
    scanf("%d", &n);
    min = 1000;
    while(n--) {
        scanf("%d", &num);
        min = (min < num) ? (min) : (num);
    }
    printf("%d", min);
    return 0;
}
