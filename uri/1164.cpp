#include <iostream>

using namespace std;

void solve(int x) {
	int sn = 0;
	for (int i = 1; i < x; i++) {
		if (x % i == 0)
			sn += i;
	}
	(sn == x) ? cout << x  << " eh perfeito" << endl
						: cout << x << " nao eh perfeito" << endl;
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
