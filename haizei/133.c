/*************************************************************************
	> File Name: 133.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 11时00分43秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        i != 1 && putchar('\n');
        for(j = i; j <= n; j++) {
            j != i && putchar('\t');
            printf("%d*%d=%d", i, j, i * j);
        }
    }
    return 0;
}
