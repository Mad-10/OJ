/*************************************************************************
	> File Name: 448.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 05:45:23 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define N 100
int arr[N + 5] = {0};
int search(int *arr, int n, int value) {
    for (int i = 1; i < n + 1; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return 0;
}
int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        cin >> arr[i];
    }
    int value;
    cin >> value;
    cout << search(arr, n, value);
    return 0;
}
