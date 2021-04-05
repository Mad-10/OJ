/*************************************************************************
	> File Name: 150.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 04:59:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_ROW 200
#define MAX_COL 200
short matrix[2][MAX_ROW][MAX_COL] = {0};
int main(void) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n * m; ++i) {
        cin >> matrix[0][i / n][i % m];
    }
    for (int i = 0; i < n * m; ++i) {
        i % m && putchar(' ');
        i % m == 0 && i && putchar('\n');
        cout << matrix[0][i % n][m - 1 - i / m];
//        matrix[1][i % m][n - 1 - i / m] = matrix[0][i / n][i % m];
        cout << "[" << i % n << "][" << m - 1 - i / m << "]" << endl;
    }
    return 0;
}
