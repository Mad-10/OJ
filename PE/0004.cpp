#include <iostream>
using namespace std;
int func(int x) {
	int t = 0, raw = x;
	while (x) {
		t = t * 10 + x % 10;
		x /= 10;
	}
	return t == raw;
}
int main(void) {
	int ans = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
	  		if (func(i * j)) {
				ans = max(ans, i * j);
			}
		}
	}
 cout << ans << endl;
	return 0;
}
