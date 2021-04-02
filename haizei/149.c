/*************************************************************************
	> File Name: 149.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 09:09:01 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    char word[50] = {0};
    char ch;
    while (ch != '\n') {
        scanf("%s", word);
        ch = getchar();
    }
    printf("%ld", strlen(word));
    return 0;
}
