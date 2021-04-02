/*************************************************************************
	> File Name: 169.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 28 Mar 2021 07:55:13 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

#define N 26
#define M 30
typedef struct Dic{
    int value;
    char ch;
}Dic;
Dic dics[N] = {0};
string str;


int solve(string str) {
    int len = str.size();
    char *p = str;
    int result = 0;
    for (int i = 0; i < len; i++) {
        if (p[i] >= 'A' && p[i] <= 'Z') {
            result += dics[p[i] - 'A'].value; 
        }
    }
    return result;
}
int main (void) {
    int n;
    scanf("%d", &n);
    char ch;
    while (n--) {
        cin >> ch;
        cin >> dics[ch - 'A'].value;
    }
    str = getline();
    cout << solve(str);
    return 0;
}
