/*************************************************************************
	> File Name: 174.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 11:16:02 AM CST
 ************************************************************************/
/*
 * 将字符串中的空格替换为%20
 * 
* */

#include<iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    string str0 = " ";
    string str1 = "%20";
    size_t pos = str.find(str0, 0);
    while (pos != string::npos) {
        str.replace(pos, str0.size(), str1);
        pos = str.find(str0, pos + 1);
    }
    cout << str;
    return 0;
}
