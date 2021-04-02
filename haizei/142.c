/*************************************************************************
	> File Name: 142.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Thu 18 Mar 2021 06:38:33 PM CST
 ************************************************************************/

#include<stdio.h>
int is_prime(int n) {
    if (n % 6 == 1 || n % 6 == 5) {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return 0;
        }
        return 1;
    }
    return 0;
}

int is_recycle(int n) {
    int x = n;
    int y = 0;
    while (x) {
        y =   y * 10 + x % 10;
        x /= 10;
    }
    return y == n;
}

int main () {
    int min, max, count = 0;
    scanf("%d %d", &min, &max);
    min += !(min & 1);
    for (int i = min; i <= max; i += 2) {
        if (!is_prime(i)) continue;
        if (!is_recycle(i)) continue;
        count++ && putchar(' ');
        printf("%d", i);
    }
    return 0;
}
