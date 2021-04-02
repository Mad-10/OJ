/*************************************************************************
	> File Name: 146.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 07:44:38 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 50
int main(void) {
    char str[MAX] = {0};
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        (str[i] >= 'A' && str[i] <= 'Z') && (str[i] = (str[i] - 'A' + 1) % ('Z' - 'A' + 1) + 'A');
        (str[i] >= 'a' && str[i] <= 'z') && (str[i] = (str[i] -'a' + 1) % ('z' - 'a' + 1) + 'a');
    }
    printf("%s", str);
    return 0;
}
