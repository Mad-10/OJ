/*************************************************************************
	> File Name: 169.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 28 Mar 2021 07:55:13 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(void) {
    int n;
    cin >> n;
    char dicA[n];
    int dicD[n];
    for (int i = 0; i < n; i++) {
        cin >> dicA[i];
        cin >> dicD[i];
    }
    string str;
    cin >> str;
    int result = 0;
    int loc1 = -1, loc2 = 0;
    for (int i = 0; i < n; ++i) {
        while (loc2 != -1) {
            loc2 = str.find(dicA[i], loc1 + 1);
            loc1 = loc2;
            if (loc2 == -1) {
                break;
            }
            result += dicD[i];
        }
        loc2 = 0;
    }
    cout << result;
    return 0;
}
