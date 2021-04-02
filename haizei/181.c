/*************************************************************************
	> File Name: 181.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 22 Mar 2021 03:52:09 PM CST
 ************************************************************************/

#include<stdio.h>
int main (void) {
    printf("a - A = %d\n", 'a' - 'A');
    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'a') {
            ch += ('a' - 'A');
            putchar(ch);
            continue;
        }
        if (ch >= 'a' && ch <= 'z'){
            ch = ch - 32;
            putchar(ch);
        }
    }
    return 0;
}
