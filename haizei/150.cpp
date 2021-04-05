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
class matrix{
    public:
    matrix(int _row, int _col) {
        this->row = _row;
        this->col = _col;
        for (int i = 0; i < this->row * this->col; i++) {
            cin >> this->data[i / col][i % col];
        }
    }
    matrix* spin_clock(void) {
        int temp[this->row * this->col] = {0};
        for (int i = 0; i < this->row * this->col; i++) {
           temp[i] = this->data[i % col] 
        }
    }
    private:
    int data[MAX_ROW][MAX_COL];
    int row, col;
};
