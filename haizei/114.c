/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 17ÈÕ 21£º40
 ************************************************************************/
#include <stdio.h>
#define H "He"
#define L "Li"
#define C "Cao"
#define D "Duan"
#define W "Wang"
#define OTHER "Not Here"
int main (void) {
	char x;
	x = getchar();
	switch(x) {
		case 'h':{
			printf("%s", H);
			break;
		}
		case 'l':{
			printf("%s", L);
			break;
		}
		case 'c':{
			printf("%s", C);
			break;
		}
		case 'd':{
			printf("%s", D);
			break;
		}
		case 'w':{
			printf("%s", W);
			break;
		}
		default:{
			printf("%s", OTHER);
		}
	}
	return 0;
}
