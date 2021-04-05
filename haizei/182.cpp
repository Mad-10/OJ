/*************************************************************************
	> File Name: 182.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 12:39:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void) {
    int n, max = 0, value;
    cin >> n;
    while (n--) {
        cin >> value;
        max = (max > value) ? (max) : (value);
    }
    cout << max;
    return 0;
}
