/*************************************************************************
	> File Name: 184.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 07:57:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return ( f(n - 1) + 1 ) * 2;
}
int main(void) {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
