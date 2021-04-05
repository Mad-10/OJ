/*************************************************************************
	> File Name: 205.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 05:54:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define N 30
int sum[N + 1] = {0};
int main(void) {
    int n, m;
    cin >> n >> m;
    int temp;
    for (int i = 0; i < n * m; i++) {
            cin >> temp;
            sum[i / m] += temp;
    }
    for (int i = 0; i < n; i++) {
        i && putchar('\n');
        printf("%.6lf", sum[i] * 1.0 / m);
    }
    return 0;
}
