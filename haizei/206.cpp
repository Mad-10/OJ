/*************************************************************************
	> File Name: 206.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 05:32:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define N 35
int main(void) {
    int n, m;
    cin >> n >> m;
    int sum[N] = {0};
    int temp;
    for (int i = 0; i < n * m; i++) {
        cin >> temp;
        sum[i % m] += temp;
    }
    for (int i = 0; i < m; i++) {
        i && putchar('\n');
        cout << sum[i];
    }
    return 0;
}
