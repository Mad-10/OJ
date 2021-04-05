/*************************************************************************
	> File Name: 173.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 09:28:18 AM CST
 ************************************************************************/

/*
*遍历字符数组判断每个字符类型
*英文字母 数字 空格 其他
*count[0] 1     2     3
* */

#include<iostream>
#include <string.h>
using namespace std;
char str[1005] = {0};
int main(void) {
    scanf("%[^\n]s", str);
    short count[4] = {0};
    for (int i = 0; str[i]; i++) {
        count[0] += ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'));
        count[1] += (str[i] >= '0' && str[i] <= '9');
        count[2] += (str[i] == ' ');
    }
    count[3] = strlen(str) - count[0] - count[1] - count[2];
    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3];
    return 0;
}
