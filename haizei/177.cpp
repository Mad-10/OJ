/*************************************************************************
	> File Name: 177.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 12:21:35 PM CST
 ************************************************************************/

#include <iostream>
#include <string.h>
#define LEN 26
using namespace std;
char str[LEN + 5] = {0};
int main(void) {
    scanf("%[^\n]s", str);
    int n = strlen(str);
    char *p = str;
    for (int i = 0; i < n; i++) {
        i && cout << endl;
        p = str + (i * (n - 2) % n);
        for (int j = 1; j < n + 1; j++) {
            cout << *p;
            p = str + (i * (n - 2) + j) % n;
        }
    }
    return 0;
}
