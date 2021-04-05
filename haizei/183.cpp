/*************************************************************************
	> File Name: 183.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 07:50:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int x) {
    if (x < 1) return 0;
    if (x == 1) return 1;
    else if (x & 1){
        return 3 * f((x + 1) >> 1) - 1;
    } else {
        return 3 * f(x >> 1) - 1;
    } 
}
int main(void) {
    int x;
    cin >> x;
    cout << f(x);
    return 0;
}
