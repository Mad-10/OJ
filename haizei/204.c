/*************************************************************************
	> File Name: 204.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 07:34:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
int main (void) {
    int n;
    scanf("%d", &n);
    int *matrix = (int *) calloc(n * n, sizeof(int));
    for (int i = 0; i < n * n; i++) {
        scanf("%d", &matrix[i]);
        if (i / n == i % n) {
            i / n && putchar('\n');
            printf("%d", matrix[i]);
        }
    }
    free(matrix);
    return 0;
}
