/*************************************************************************
	> File Name: 144.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 20 Mar 2021 10:25:07 PM CST
 ************************************************************************/

#include<stdio.h>
int main(void) {
    char ch = 0;
    int count = 0;
    while ((ch = getchar()) != '\n') {
        if (ch == 'A') count++;
    }
    printf("%d", count);
    return 0;
}
