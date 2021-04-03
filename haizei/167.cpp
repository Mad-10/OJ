/*************************************************************************
	> File Name: 167.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sat 03 Apr 2021 11:20:54 AM CST
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
    string A, B;
    int n;
    cin >> A >> n >> B;
    int L = A.size();
    cout << A.size() << endl;
    cout << A.find('a') + 1 << endl;
    A.insert(n - 1, B);
    cout << A;
    return 0;
}
