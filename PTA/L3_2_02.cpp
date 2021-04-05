/*************************************************************************
	> File Name: L3_2.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 04 Apr 2021 04:37:52 PM CST
 ************************************************************************/
/*
*分别删除字符串中的0，1，2，3个字符，并用临时字符串保存，之后插入到字符串集合中
*输出集合中元素个数（即不同字符串的个数）
* */


#include<iostream>
#include <set>
using namespace std;
string str[4];
int main() {
    cin >> str[3];
    cout << str[3] << ":";
    set<string> fragments;
    fragments.insert(str[3]);
    int len = str[3].size();
    for (int i = 0; i < len; i++) {
        str[0] = str[3];
        str[0] = str[0].erase(i, 1);
        //cout << str[i] << endl;
        fragments.insert(str[0]);
        for (int j = 0; j < len - 1; ++j) {
            str[1] = str[0];
            str[1] = str[1].erase(j, 1);
            //cout << str[j] << endl;
            fragments.insert(str[1]);
            for (int k = 0; k < len - 2; ++k) {
                str[2] = str[1];
                str[2] = str[2].erase(k, 1);
                //cout << str[k] << endl;
                fragments.insert(str[2]);
            }
        }
    }
    cout << fragments.size() <<endl;
    return 0;
}
