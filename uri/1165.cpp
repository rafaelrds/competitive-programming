#include <iostream>
#include <cmath>

using namespace std;

void solve (int x) {
	bool isPrime = true;
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			isPrime = false;
			break;
		}
	}
	(isPrime) ? cout << x << " eh primo" << endl : cout << x << " nao eh primo" << endl;
}

int main() {
	int n, x;
	cin >> n;
	while (n--) {
		cin >> x;
		solve(x);
	}

	return 0;
}
