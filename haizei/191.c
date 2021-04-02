/*************************************************************************
	> File Name: 191.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Wed 24 Mar 2021 12:55:45 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 8000000

int prime[MAX_N  + 5] = {0};
void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i; j < MAX_N / i; j++) {
            prime[j * i] = 1;
        }
    }
    return ;
}

void solve (int a, int b) {
    int temp = 0, min = b, max = 0;
    int min_a, min_b, max_a, max_b;
    for (int i = 1; i <= prime[0] && prime[i + 1] <= b; i++) {
        if (prime[i] < a) continue;
        temp = prime[i + 1] - prime[i];
        if (temp < min) {
            min = temp;
            min_a = prime[i], min_b = prime[i + 1];
        }
        if (temp > max) {
            max = temp;
            max_a = prime[i], max_b = prime[i + 1];
        }
    }
    if (max == 0) {
        printf("There are no adjacent primes.\n");
    } else {
        printf("%d,%d are closest, %d,%d are most distant.\n", min_a, min_b, max_a, max_b);
    }
    return ;
}
int main (void) {
    init();
    int a, b;
    while (~scanf("%d %d", &a, &b)) {
        solve(a, b);
    }
    return 0;
}
