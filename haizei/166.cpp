/*************************************************************************
	> File Name: 166.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 10:16:44 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main(void) {
    string A, B;
    int n;
    cin >> A >> n >> B;
    int l = A.size();
    cout << ((l > 100) ? (100) : (l)) << endl;
    A.insert(n - 1, B);
    cout << A << endl;
    cout << (A.size() - A.find_last_of('x'));
    return 0;
}
