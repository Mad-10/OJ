/*************************************************************************
	> File Name: 174_01.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 11:48:28 AM CST
 ************************************************************************/

#include<iostream>
#define LEN 1000005
using namespace std;
char str[LEN] = {0};
int main(void) {
    scanf("%[^\n]s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            cout << "%20";
            continue;
        }
        cout << str[i];
    }
    return 0;
}
