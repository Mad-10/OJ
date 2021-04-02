/*************************************************************************
	> File Name: 463.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 21 Mar 2021 02:54:37 PM CST
 ************************************************************************/

#include<stdio.h>
typedef struct Window{
    int left, right, top, buttom;
}Window;
int main (void) {
    Window win1, win2;
    scanf("%d %d %d %d", &win1.left, &win1.right, &win1.top, &win1.buttom);
    scanf("%d %d %d %d", &win2.left, &win2.right, &win2.top, &win2.buttom);
    return 0;
}
