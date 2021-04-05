/*************************************************************************
	> File Name: 176.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 12:15:09 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void) {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    size_t count = 0, pos = str1.find(str2, 0);
    while (pos != string::npos) {
        ++count;
        pos = str1.find(str2, pos + 1);
    }
    cout << count;
    return 0;
}
