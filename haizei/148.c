/*************************************************************************
	> File Name: 148.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 08:48:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main (void) {
    char *str = (char *) calloc(50, sizeof(char));
    int n;
    scanf("%s%n", str, &n);
    for (int i = n - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    free(str);
    return 0;
}
