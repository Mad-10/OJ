/*************************************************************************
	> File Name: 215.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 01:32:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define LEN 40
size_t head[4] = {0, 1, 2, 3};
string names[LEN + 1] = {0};
size_t score[LEN + 1] = {0};
void sort(size_t *begin, size_t *end) {
    int n = end - begin + 1;
    int flag = 1;
    for (int i = 1; i < n; i++) {
        flag = 1;
        for (int j = 0; j < n - i; j++) {
            if (score[begin[j]] < score[begin[j + 1]]) {
                size_t temp = begin[j];
                begin[j] = begin[j + 1];
                begin[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag) break;
    }
}
int main(void) {
    int n;
    cin >> n;
    size_t temp;
    while (n--) {
        cin >> names[n];
        cin >> temp;
        score[n] += temp;
        head[3] = n;
        sort(head, head + 3);
    }
    for (int i = 0; i < 3; i++) {
        i && putchar('\n');
        cout << names[head[i]];
    }
    return 0;
}
