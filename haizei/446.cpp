/*************************************************************************
	> File Name: 446.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 06:30:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define N 10
#define MIN_2(a, b) (((a) < (b)) ? (a) : (b)) 
#define MIN_4(a, b, c, d) ((MIN_2(a, b) < MIN_2(c, d)) ? (MIN_2(a, b)) : (MIN_2(c, d)))
int matrix[N][N] = {0};
int min_distance(int i, int j, int n) {
    int d1 = i;
    int d2 = n- 1 - i;
    int d3 = j;
    int d4 = n - 1 - j;
    return (MIN_4(d1, d2, d3, d4));
}
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n * n; i++) {
        i % n == 0 && i && putchar('\n');
        i % n && putchar(' ');
        cout << min_distance(i / n, i % n, n) + 1 ;
    }
    return 0;
}
