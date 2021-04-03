/*************************************************************************
	> File Name: 170.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 02:07:08 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
//using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(void) {
    int n;
    cin >> n;
    std::string str1 = "Ban";
    std::string str2 = "No";
    int pos, pos1;
    while (n--) {
        pos = 0;
        pos1 = -1;
        std::string str;
        cin >> str;
        while (pos != -1) {
            pos = str.find(str1, pos1 +  1);
            pos1 = pos;
            if (pos1 == -1) break;
            str.replace(pos, str1.size(), str2);
        }
        cout << str;
        n && putchar('\n');
    }
    return 0;
}
