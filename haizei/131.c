/*************************************************************************
    > File Name: 131.c
    > Author: AlanIvan
    > Mail: 2728946156@qq.com
    > Created Time: 2021年02月19日 星期五 20时41分19秒
    > Problem:#131
    > Link:http://oj.haizeix.com/problem/131
    > Describe: 极差是指一组数据中，最大值与最小值之差。现在输出一组数字，计算这组数字的极差。
    > Input:  第一行输入一个正整数 n。（1≤n≤100） 第二行输入 n个正整数 X1,X2……Xn。（1≤Xn≤10000）
    > Output:  输出一个数字，表示这组数据的极差。
    > Input_Demo:   5
                    2 6 10 8 4
    > Output_Demo: 8
 ************************************************************************/
#include <stdio.h>
int main(void) {
    int min, max, num, n;
    scanf("%d", &n);
    min = 10000;
    max = 1;
    while(n--) {
        scanf("%d", &num);
        min = (min < num) ? (min) : (num);
        max = (max > num) ? (max) : (num);
    }
    printf("%d", max - min);
    return 0;
}
