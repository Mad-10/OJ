/*************************************************************************
	> File Name: 202.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 12:43:02 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
#define LEN 1000
typedef struct Stu{
    short height;
    short order;
}Stu;
static void swap(Stu *stu1, Stu *stu2) {
    short temp = stu1->height;
    stu1->height = stu2->height;
    stu2->height = temp;
    temp = stu1->order;
    stu1->order = stu2->order;
    stu2->order = temp;
}
static void sort(Stu *left, Stu *right) {
    int n = right - left;
    int flag = 1;
    for (int i = 1; i < n; i++) {
        flag = 1;
        for (int j = 0; j < n - i; j++) {
            if ((left + j)->height > (left + j + 1)->height) {
                swap(left + j, left + j + 1);
                flag = 0;
            }
        }
        if(flag) break;
    }
}
Stu stus[LEN + 5] = {0};
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stus[i].height;
        stus[i].order = i + 1;
    }
    sort(stus, stus + n);
    for (int i = 0; i < n; i++) {
        i && putchar(' ');
        cout << stus[i].order;
    }
    return 0;
}
