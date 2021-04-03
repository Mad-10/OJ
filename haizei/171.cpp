/*************************************************************************
	> File Name: 171.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 02:21:36 PM CST
 ************************************************************************/

#include<iostream>
#define A -1

bool recycle_number(int n) {
    int x = n, y = 0;
    while (x) {
        y = (y * 10) + (x % 10);
        x /= 10;
    }
    return y == n;
}
int main(void) {
    int m, n, temp = 0;
    std::cin >> n;
    m = n;
    for (int i = 0; !recycle_number(m); i++) {
        temp += (temp < 0) ? -(i & 1): (i & 1);
        m = n + (temp *= A);
    }
    std::cout << m;
    return 0;
}
