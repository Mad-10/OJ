/*************************************************************************
	> File Name: 107.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月16日 星期二 20时59分32秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);
    if (n & 1 == 1 && n % 7 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
