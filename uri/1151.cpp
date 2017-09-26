#include <iostream>

using namespace std;

void solve(int n) {
	int a = 0, b = 1, c;

	for (int i = 0; i < n; i++) {
		(i < n -1 ) ? cout << a << " " : cout << a << endl;
		c = a + b;
		a = b;
		b = c;
	}
	
}

int main () {
	int n;
	cin >> n;
	solve(n);

	return 0;
}