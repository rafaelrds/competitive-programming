#include <iostream>

using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		int s = 0, t = 0;
		while (t < y) {
			if (x % 2 != 0) {
				s += x;
				t++;
			}
			x++;
		}

		cout << s << endl;
	}


	return 0;
}