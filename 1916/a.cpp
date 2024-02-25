#include <iostream>

int main() {
	using namespace std;
		
	int t, n, k, b, prod;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		for (int j = 0; j < n; j++) {
			cin >> b;
			if (j == 0) {
				prod = b;
				continue;
			}
			prod *= b;
		}
		if (2023 % prod != 0) {
			printf("NO\n");
			continue;
		}
		printf("YES\n");
		for (int j = 0; j < k-1; j++) {
			printf("1 ");
		}
		printf("%d\n", 2023 / prod);
	}
}
