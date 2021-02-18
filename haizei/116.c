/*************************************************************************
	> File Name: 115.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 18�� 11��42
 ************************************************************************/
#include <stdio.h>
#define C1 "illegal triangle"
#define C2 "acute triangle"
#define C3 "right triangle"
#define C4 "obtuse triangle"
void sort(int *a, int *b, int *c) {
	int temp = *a;
	if (*a < *b) {
		*a = *b;
		*b = temp;
	}
	temp = *b;
	if (*b < *c) {
		*b = *c;
		*c = temp;
	}
	temp = *a;
	if (*a < *b) {
		*a = *b;
		*b = temp;
	}
}
int main (void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//��a,b,c���Ӵ�С����
	sort(&a, &b, &c);
	if(b + c < a) {
		printf("%s", C1);
		return 0;
	} else if (b * b + c * c > a * a) {
		printf("%s", C2);//���������
		return 0;
	} else if (b * b + c * c == a * a) {
		printf("%s", C3);//ֱ��������
		return 0;
	} else if (b * b + c * c < a * a) {
		printf("%s", C4);//�۽�������
		return 0;
	}
}
