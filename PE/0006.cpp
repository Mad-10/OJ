#include <iostream>
using namespace std;
int main(void) {
	int sum = 0, psum = 0;
	for (int i = 1; i < 101; i ++) {
		psum += i * i;
		sum += i;
	}
	cout << sum * sum - psum << endl;
	return 0;
}

/*
int n = 100;
	cout <<  n * n * (n + 1) * (n + 1) / 4 - n * (2 * n + 1) * (n + 1) / 6;
*/
