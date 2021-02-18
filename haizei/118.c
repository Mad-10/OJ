/*************************************************************************
	> File Name: 118.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021Äê 02ÔÂ 18ÈÕ 14£º28
 ************************************************************************/
#include <stdio.h>
#include <math.h>
void fun(int x) {
	switch(x) {
		case 0:{
			printf("rat");
			return;
		}
		case 1:{
			printf("ox");
			return;
		}
		case 2:{
			printf("tiger");
			return;
		}
		case 3:{
			printf("rabbit");
			return;
		}
		case 4:{
			printf("dragon");
			return;
		}
		case 5:{
			printf("snake");
			return;
		}
		case 6:{
			printf("horse");
			return;
		}
		case 7:{
			printf("sheep");
			return;
		}
		case 8:{
			printf("monkey");
			return;
		}
		case 9:{
			printf("rooster");
			return;
		}
		case 10:{
			printf("dog");
			return;
		}
		case 11:{
			printf("pig");
			return;
		}
	}
}
int main (void) {
	int year;
	scanf("%d", &year);
	year = (year + 8) % 12;
	fun(year);
	return 0;
}
