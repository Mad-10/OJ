#include <iostream>
using namespace std;
unsigned long long sum = 0;
int MAX = 4000000;
void F(void) {
	int f1 = 0, f2 = 1, fn = f1 + f2;
	while (fn <= MAX) {
		f1 = f2;
		f2 = fn;
		fn = f1 + f2;
		if (!(fn & 1)) {
			sum += fn;
		}
 	}
 	cout << sum;
}
int main(void) {
	F();
	return 0;
}
