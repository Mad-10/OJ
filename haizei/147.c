/*************************************************************************
	> File Name: 147.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 08:35:35 AM CST
 ************************************************************************/

#include<stdio.h>
int main(void) {
    char str[10000] = {0};
    int n;
    scanf("%s%n", str, &n);
    if (str[n - 1] % 2 != 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
