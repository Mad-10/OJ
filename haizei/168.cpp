/*************************************************************************
	> File Name: 168.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 11:33:09 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
#include <algorithm>
using std::cin;
using std::endl;
using std::cout;
using std::string;

int main(void) {
    int n;
    cin >> n;
    string A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        transform(A[i].begin(), A[i].end(), A[i].begin(), tolower);
        (A[i][0]) = toupper(A[i].front());
    }
    sort((&A[0]), (&A[n]));
    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
    return 0;
}
