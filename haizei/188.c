/*************************************************************************
	> File Name: 188.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Wed 24 Mar 2021 04:07:37 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init () {
    for (int i = 2; i <= MAX_N; i ++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i; j <= MAX_N / i; j++) {
            prime[i * j] = 1;
        }
    }
}

void solve(int min, int max) {
    for (int i = 1; i < prime[0] && prime[i] <= max; i++) {
        if (prime[i] < min) continue;
        printf("%d\n", prime[i]);
    }
}

int main (void) {
    init();
    int n, m;
    scanf("%d %d", &n, &m);
    solve(m, n);
    return 0;
}
