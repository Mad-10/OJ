//UINT_MAX
#include <iostream>
using namespace std;
void solve(void) {
	bool flag = 0;
	for (unsigned int i = 2520; i <= UINT_MAX; i++) {
		for (int j = 1; j < 21; j++) {
			if (i % j) {
				flag = 0;
				break;
			} else {
				flag = 1;
			}
		}
		if (flag) {
			cout << i;
			return ;
		}
	}
}

int main(void) {
	solve();
	return 0;
}
