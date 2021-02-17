/*************************************************************************
	> File Name: 109.c
	> Author:AlanIvan 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 13时04分43秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);
    while(n != 0) {
        if((n % 10) % 2 == 0) {
            printf("YES");
            return 0;
        }
        n /= 10;
    }
    printf("NO");
    return 0;
}
