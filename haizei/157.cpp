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
    for (int i = n; i ; i--) {
        i != n && cout << endl;
        for (int j = 0; j < n - i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < i - 1; j++) {
            putchar('A' +  n - i + j);
        }
        for (int j = i - 1; j + 1; j--) {
            putchar('A' + n - i + j);
        }
    }
    for (int i = 2; i <= n; i++) {
        cout << endl;
        for (int j = 0; j < n - i; j++) {
            putchar(' ');
        }
        for (int j = 0; j < i - 1; j++) {
            putchar('A' +  n - i + j);
        }
        for (int j = i - 1; j + 1; j--) {
            putchar('A' + n - i + j);
        }
    }
    return 0;
}
