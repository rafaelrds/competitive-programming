#include <iostream>

using namespace std;

int solve(int n) {
	int res = 1;
	for (int i = 2; i <= n; i++)
		res *= i;
	return res;
}

int main () {
	int n;
	cin >> n;
	cout << solve(n) << endl;

	return 0;
}