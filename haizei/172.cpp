/*************************************************************************
	> File Name: 172.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 04:16:45 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string strs[10];
    for (int i = 0; i < 10; i++) {
        cin >> strs[i];
    }
    sort(strs, strs + 10);
    for (int i = 0; i < 10; i++) {
        i && putchar('\n');
        cout << strs[i];
    }
    return 0;
}
