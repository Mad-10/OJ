#include <iostream>
using namespace std;
int MAX = 1000;
int main(void) {
	int sum = 0;
	for (int i = 1; i < MAX; i++) {
		if (i % 3 == 0 || i % 5 == 0) sum += i;
	}
	cout << sum;
	return 0;
}
