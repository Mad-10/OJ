/*************************************************************************
	> File Name: 175.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 11:55:07 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define RANG1(F) (F > 89 && F < 101)
#define RANG2(F) (F > 79 && F < 90)
#define RANG3(F) (F > 59 && F < 80)
#define RANG4(F) (F > -1 && F < 60)
string strs[4] = {"You", "Liang", "Zhong", "Cha"};
char count[4] = {0};
int main(void) {
    int n, F;
    cin >> n;
    while (n--) {
        cin >> F;
        count[0] += RANG1(F);
        count[1] += RANG2(F);
        count[2] += RANG3(F);
        count[3] += RANG4(F);
    }
    for (int i = 0; i < 4; i++) {
        i && putchar('\n');
        cout << strs[i] << " " << (int)count[i];
    }
    return 0;
}
