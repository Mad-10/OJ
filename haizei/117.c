/*************************************************************************
	> File Name: 117.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月16日 星期二 21时17分18秒
    > Question:判断一个数是不是回文数。
 ************************************************************************/

#include<stdio.h>
int palindromic_number(int n) {
    int x = n;
    int y = 0;
    while (x != 0) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    if (y == n) {
        return 1;
    } else {
        return 0;
    }
}

int main (void) {
    int n;
    scanf("%d", &n);
    if (palindromic_number(n) == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
