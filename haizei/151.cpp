/*************************************************************************
	> File Name: 151.cpp
	> Author: AlanIvan
	> Mail: 2728946156@qq.com
	> PhoneNumver: 18238908590
	> Created Time: Mon 05 Apr 2021 03:47:23 PM CST
 ************************************************************************/

#include<iostream>
typedef int Status;
#define WIN 1
#define LOSE -1
#define  DOGFALL 0
using namespace std;
class person{
    public:
    char left, right;
    string name;
    void compare(person& another) {
        int l = 0, m = 0, r = 0;
        switch(this->left) {//this的左手和左手比
            case 'Y':{
                switch(another.left) {
                    case 'H':{
                        l = WIN;
                        break;
                    }
                    case 'Y': {
                        l = DOGFALL;
                        break;
                    }
                    case 'O':{
                        l = LOSE;
                    }
                }
                break;
            }
            case 'O':{
                switch(another.left) {
                    case 'Y':{
                        l = WIN;
                        break;
                    }
                    case 'O': {
                        l = DOGFALL;
                        break;
                    }
                    case 'H':{
                        l = LOSE;
                    }
                }
                break;
            }
            case 'H':{
                switch(another.left) {
                    case 'O':{
                        l = WIN;
                        break;
                    }
                    case 'H': {
                        l = DOGFALL;
                        break;
                    }
                    case 'Y':{
                        l = LOSE;
                    }
                }
            }
        }
        switch(l) {//根据左手比的结果进行判断
            case WIN:{//如果this的左手赢了
                switch(this->left) {//比较左手和右手
                    case 'Y':{
                        switch(another.right) {
                            case 'H':{
                                m = WIN;
                                break;
                            }
                            case 'Y': {
                                m = DOGFALL;
                                break;
                            }
                            case 'O':{
                                m = LOSE;
                            }
                        }
                        break;
                    }
                    case 'O':{
                        switch(another.right) {
                            case 'Y':{
                                m = WIN;
                                break;
                            }
                            case 'O': {
                                m = DOGFALL;
                                break;
                            }
                            case 'H':{
                                m = LOSE;
                            }
                        }
                        break;
                    }
                    case 'H':{
                        switch(another.right) {
                            case 'O':{
                                m = WIN;
                                break;
                            }
                            case 'H': {
                                m = DOGFALL;
                                break;
                            }
                            case 'Y':{
                                m = LOSE;
                            }
                        }
                    }
                }
                switch(m){
                    case WIN:
                    case DOGFALL:{
                        cout << this->name;
                        return;
                    }
                    case LOSE:{
                        switch(this->right) {
                            case 'Y':{
                                switch(another.right) {
                                    case 'H':{
                                        r = WIN;
                                        break;
                                    }
                                    case 'Y': {
                                        r = DOGFALL;
                                        break;
                                    }
                                    case 'O':{
                                        r = LOSE;
                                    }
                                }
                                break;
                            }
                            case 'O':{
                                switch(another.right) {
                                    case 'Y':{
                                        r = WIN;
                                        break;
                                    }
                                    case 'O': {
                                        r = DOGFALL;
                                        break;
                                    }
                                    case 'H':{
                                        r = LOSE;
                                    }
                                }
                                break;
                            }
                            case 'H':{
                                switch(another.right) {
                                    case 'O':{
                                        r = WIN;
                                        break;
                                    }
                                    case 'H': {
                                        r = DOGFALL;
                                        break;
                                    }
                                    case 'Y':{
                                        r = LOSE;
                                    }
                                }
                            }
                        }
                    }
                    switch(r) {
                        case WIN: {
                            cout << this->name;
                            return ;
                        }
                        case LOSE:
                        case DOGFALL:{
                            cout << another.name;
                            return;
                        }
                    }
                }
                break;
            }
            case DOGFALL:{
                switch(this->right) {
                    case 'Y':{
                        switch(another.right) {
                            case 'H':{
                                cout << this->name;
                                return;
                            }
                            case 'Y': {
                                cout << "TIE";
                                return;
                            }
                            case 'O':{
                                cout << another.name;
                                return;
                            }
                        }
                        break;
                    }
                    case 'O':{
                        switch(another.right) {
                            case 'Y':{
                                cout << this->name;
                                return;
                            }
                            case 'O': {
                                cout << "TIE";
                                return;
                            }
                            case 'H':{
                                cout << another.name;
                                return;
                            }
                        }
                        break;
                    }
                    case 'H':{
                        switch(another.right) {
                            case 'O':{
                                cout << this->name;
                                return;
                            }
                            case 'H': {
                                cout << "TIE";
                                return;
                            }
                            case 'Y':{
                                cout << another.name;
                                return;
                            }
                        }
                    }
                }
                break;
            }
            case LOSE:{//如果this的左手输了
                switch(this->right) {
                    case 'Y':{
                        switch(another.left) {
                            case 'H':{
                                m = WIN;
                                break;
                            }
                            case 'Y': {
                                m = DOGFALL;
                                break;
                            }
                            case 'O':{
                                m = LOSE;
                            }
                        }
                        break;
                    }
                    case 'O':{
                        switch(another.left) {
                            case 'Y':{
                                m = WIN;
                                break;
                            }
                            case 'O': {
                                m = DOGFALL;
                                break;
                            }
                            case 'H':{
                                m = LOSE;
                            }
                        }
                        break;
                    }
                    case 'H':{
                        switch(another.left) {
                            case 'O':{
                                m = WIN;
                                break;
                            }
                            case 'H': {
                                m = DOGFALL;
                                break;
                            }
                            case 'Y':{
                                m = LOSE;
                            }
                        }
                    }
                }
                switch(m) {
                    case LOSE:
                    case DOGFALL:{
                        cout << another.name;
                        return;
                    }
                    case WIN:{
                        switch(this->right) {
                            case 'Y':{
                                switch(another.right) {
                                    case 'H':{
                                    }
                                    case 'Y': {
                                        cout << this->name;
                                        return;
                                    }
                                    case 'O':{
                                        cout << another.name;
                                        return;
                                    }
                                }
                                break;
                            }
                            case 'O':{
                                switch(another.right) {
                                    case 'Y':{
                                    }
                                    case 'O': {
                                        cout << this->name;
                                        return;
                                    }
                                    case 'H':{
                                        cout << another.name;
                                        return;
                                    }
                                }
                                break;
                            }
                            case 'H':{
                                switch(another.right) {
                                    case 'O':{
                                    }
                                    case 'H': {
                                        cout << this->name;
                                        return;
                                    }
                                    case 'Y':{
                                        cout << another.name;
                                        return;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
};
int main(void) {
    person p1, p2;
    p1.name = "MING";
    p2.name = "LIHUA";
    cin >> p1.left >> p1.right;
    cin >> p2.left >> p2.right;
    p1.compare(p2);
    return 0;
}
