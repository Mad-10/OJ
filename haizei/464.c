/*************************************************************************
	> File Name: 464.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 02:04:28 PM CST
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int leap(int n) {
    return n % 400 == 0 || (n % 4 == 0 && n % 100 != 0);
}
int main (void) {
    int min, max;
    scanf("%d %d", &min, &max);
    int result = 0;
    min = ceil((double)min / 4), max /= 4;
    for (int i = min; i <= max; i++) {
        result += leap(i * 4);
    }
    printf("%d", result);
    return 0;
}
