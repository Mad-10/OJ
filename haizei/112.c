/*************************************************************************
	> File Name: 95.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021�� 02�� 17�� 21��12
 ************************************************************************/
#include <stdio.h>
#define s1 "It is good"
#define s2 "OMG"
#define s3 "Yes!"
int main (void) {
	char ch;
	ch = getchar();
	switch(ch) {
		case 'a':{
			printf("%s", s1);
			break;
		}
		case 'b':{
			printf("%s", s2);
			break;
		}
		case 'c':{
			printf("%s", s3);
			break;
		}
	}
    return 0;
}
