/*************************************************************************
	> File Name: L2_2_01.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 04 Apr 2021 11:16:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define LEN 1000005
char str[3][LEN] = {0};
int main() {
    cin >> str[0];
    str[2] = str[1] = str[0];
    set<char> fragments;
    fragments.insert(str[0]);

    return 0;
} 
