/*************************************************************************
	> File Name: 132.c
	> Author:AlanIvna 
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月17日 星期三 11时57分08秒
 ************************************************************************/

#include<stdio.h>
int main (void) {
    unsigned long long a, b, n;
    scanf("%llu", &n);
    a = b = 1;
    while(n--) {
        scanf("%llu", &a);
        b *= a;
    }
    printf("%llu", b);
    return 0;
}
