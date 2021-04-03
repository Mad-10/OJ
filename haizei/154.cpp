/*************************************************************************
	> File Name: 154.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Fri 02 Apr 2021 07:02:45 PM CST
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
    int n;
    cin >> n;
    while (n) {
        for (int i = n; i ; i--) {
            i != n && cout << " ";
            cout << i;
        }
        n-- && cout << endl;
    }
    return 0;
}
