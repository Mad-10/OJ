/*************************************************************************
	> File Name: 155.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Fri 02 Apr 2021 07:46:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void) {
    int n, result = 0;
    cin >> n;
    for (int i = 3, j = 0; n-- ;j++ ) {
        j && cout << endl;
        cout << (i += j * 2);
        result += i;
    }
    cout << endl << result;
    return 0;
}
