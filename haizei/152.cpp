/*************************************************************************
	> File Name: 152.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Sun 04 Apr 2021 08:10:51 AM CST
 ************************************************************************/
/**
*Declare a array of string named week; let week[0] = Sunday, week[1] = Monday... week[6] = Saturday; 
*print the week[(n + 3) % 7] to the out stream
*
* */


#include<iostream>
using namespace std;

string week[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

int main(void) {
    int n;
    cin >> n;
    cout << week[(n + 3) % 7];
    return 0;
}
