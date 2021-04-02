/*************************************************************************
	> File Name: 195.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Fri 26 Mar 2021 11:37:47 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int num[MAX_N + 5] = {0};

int binary_search(int n, int x) {
    int head = 0, tail = n - 1, mid; 
    while (head < tail) {
        mid = (head + tail + 1) >> 1;
        if (num[mid] <= x) head = mid;
        else tail = mid - 1;
    }
    return num[head];
}

int main (void) {
    int n, m, value;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &value);
        i && putchar(' ');
        printf("%d", binary_search(n, value));
    }
    return 0;
}
