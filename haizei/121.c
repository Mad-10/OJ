/*************************************************************************
	> File Name: 121.c
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> Created Time: 2021年02月19日 星期五 09时11分40秒
 ************************************************************************/

#include<stdio.h>
#define RESULT1 "MING"
#define RESULT2 "LI"
#define RESULT3 "TIE"
int main (void) {
    char m, l;
    scanf("%c%*c%c", &m, &l);
    switch(m) {
        case 'H':{
            switch(l){
                case 'Y':{
                    printf(RESULT2);
                    break;
                }
                case 'O':{
                    printf(RESULT1);
                    break;
                }
                case 'H':{
                    printf(RESULT3);
                    break;
                }
            }
            break;
        }
        case 'O':{
            switch(l) {
                case 'Y':{
                    printf(RESULT1);
                    break;
                }
                case 'O':{
                    printf(RESULT3);
                    break;
                }
                case 'H':{
                    printf(RESULT2);
                    break;
                }
            }
            break;
        }
        case 'Y':{
            switch(l) {
                case 'Y':{
                    printf(RESULT3);
                    break;
                }
                case 'O':{
                    printf(RESULT2);
                    break;
                }
                case 'H':{
                    printf(RESULT1);
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
