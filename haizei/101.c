/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 17ÈÕ 19£º31
 ************************************************************************/

#include <stdio.h>
int main (void) {
	int n, result;
	scanf("%d", &n);
	result = 0;
	while(n != 0) {
		result += n % 10;
		n /= 10;
	}
	printf("%d", result);
    return 0;
}
