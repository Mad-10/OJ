#include <iostream>
using namespace std;
int main(void) {
	int n = 100;
	cout <<  n * n * (n + 1) * (n + 1) / 4 - n * (2 * n + 1) * (n + 1) / 6;
	return 0;
}
