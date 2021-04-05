/*************************************************************************
	> File Name: 171.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 02:21:36 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
int main(void) {
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    union {
        unsigned long long digit[56];
    }

    string str;
    cin >> str;
    string str2 = str;
    reverse(str.begin(), str.end());
    cout << (str.compare(str2));
    return 0;
}
