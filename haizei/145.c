/*************************************************************************
	> File Name: 145.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 20 Mar 2021 10:29:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(void) {
    int n, len1 = 0, len2 = 0;
    char max[100] = {0};
    char temp[100] = {0};
    scanf("%d", &n);
    while (n--) {
        scanf("%s", temp);
        len1 < (len2 = strlen(temp)) && (len1 = len2) && strcpy(max, temp);
    }
    printf("%s", max);
    return 0;
}
