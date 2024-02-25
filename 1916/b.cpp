#include <iostream>

unsigned long long calculateMDC(unsigned long long a, unsigned long long b) {
	while (b != 0) {
		unsigned long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

unsigned long long calculateMMC(unsigned long long a, unsigned long long b) {
	return (a * b) / calculateMDC(a, b);
}

int main() {
	using namespace std;
	
	unsigned int t;
	unsigned long long a, b, mmc;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		mmc = calculateMMC(a, b);
		if (mmc == a || mmc == b) {
			printf("%d\n", mmc * 2);
			continue;
		}
		printf("%d\n", mmc);
	}
}
