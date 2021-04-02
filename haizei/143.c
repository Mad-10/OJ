/*************************************************************************
	> File Name: 143.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Wed 17 Mar 2021 06:33:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n % 6 == 1 || n % 6 == 5) {
        int i = 0;
        for (i = 3; i * i <= n; i += 2) {
            if (!(n % i)) {
                break;
            }
        }
        if (i * i > n) {
            return 1;
        }
    }
    return 0;
}

int is_prefect_square(int n) {
    int temp = sqrt(n);
    return temp * temp == n;
}

int main (void) {
    int min, max;
    scanf("%d %d", &min, &max);
    min /= 6;
    max /= 6;
    int count = 0;
    for (int i = (min >= 167) ? (min) : (167); i <= max; i++) {
        if (!((i * 6 / 100) & 1)) continue;
        if (!is_prime(i * 6 / 100)) {
            continue;
        }
        if (!(is_prefect_square((i * 6) % 100))) {
            continue;
        }
        count++ && putchar(' ');
        printf("%d", i * 6);
    }
    printf("\n%d", count);
    return 0;
}
