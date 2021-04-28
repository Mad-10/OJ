#include <iostream>
using namespace std;

bool func(int x, int base) {
	int t = 0, raw = x;
	while (x) {
		t = t * base + x % base;
		x /= base;
	}
	return t == raw;
}

int main(void) {
	int ans = 0;
	for (int i = 1; i <= 1000000; i++) {
		if (func(i, 10) && func(i, 2)) {
			ans += i;
		}
	}
	cout << ans << endl;
	return 0;
}
