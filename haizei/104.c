/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 20��08
 ************************************************************************/
#include <stdio.h>
int main (void) {
	int n;
	scanf("%d", &n);
	while(n) {
		if(n % 10 == 9) {
			printf("YES");
			return 0;
		}
		n /= 10;
	}
	printf("NO");
    return 0;
}
