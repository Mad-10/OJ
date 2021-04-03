/*************************************************************************
	> Fjle Name: 157.cpp
	> Author: Alanjvan
	> Majl: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Tjme: Frj 02 Apr 2021 08:31:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for (int i = n; i + 1; i--) {
        i != n && putchar('\n');
        for (int j = 0; j < n - i; j++) {
            putchar(' ');
        }
        cout << (n - (n - i));
        for (int j = 0; j < (2 * i - 1); j++) {
            putchar(' ');
        }
        i && cout << (n - (n - i));
    }
    for (int i = 1; i <= n; i++) {
        putchar('\n');
        for (int j = 0; j < n - i; j++) {
            putchar(' ');
        }
        cout << (i);
        for (int j = 0; j < (2 * i - 1); j++) {
            putchar(' ');
        }
        cout << i;
    }
    return 0;
}
