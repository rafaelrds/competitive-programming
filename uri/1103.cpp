#include <iostream>

using namespace std;

int main() {
	int h1, m1, h2, m2, ans;
	while (true) {
		cin >> h1 >> m1 >> h2 >> m2;
		if (!h1 && !m1 && !h2 && !m2)
			break;

		ans = 0;
		int start_m = h1 * 60 + m1;
		int end_m = h2 * 60 + m2;

		if (start_m > end_m) { // woke up in the next day
			end_m += 24 * 60;
		}

		ans = end_m - start_m;

		cout << ans << endl;
	}

	return 0;
}
