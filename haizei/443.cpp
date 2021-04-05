/*************************************************************************
	> File Name: 443.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 07:15:56 PM CST
 ************************************************************************/

#include<iostream>
#include <set>
using namespace std;
#define L 10005
int trees[L] = {0};
int main(void) {
    int l, m;
    cin >> l >> m;
    for (int i = 0, left, right; i < m; i++) {
        cin >> left >> right;
        for (int i = left; i < right + 1; i++) {
            trees[i] = 1;
        }
    }
    int result = 0;
    for (int i = 0; i < l + 1; i++) {
        result += trees[i];
    }
    cout << l + 1 - result;
    return 0;
}

