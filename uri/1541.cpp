#include <iostream>
#include <math.h>

using namespace std;

// A*B --- C
// x^2  --- 100
// x = floor(sqrt(80*(100/20)))
int main() {
	int A, B, C, ans;
	while (true) {
		cin >> A;
		if (A == 0) break;
		cin >> B >> C;
		ans = sqrt((A * B) * (100.0 / C));
		cout << ans << endl;
	}

	return 0;
}
