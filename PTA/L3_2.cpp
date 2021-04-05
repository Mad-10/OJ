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
#define LEN 1000005
using namespace std;

char str[3][LEN] = {0};
int main() {
    cin >> str[0];
    str[2] = str[1] = str[0];
    return 0;
}
