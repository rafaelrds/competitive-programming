#include <iostream>

using namespace std;


int main (){ 
	int x,y,tmp;
	cin >> x >> y;
	if (y < x) {
		tmp = y;
		y = x;
		x = tmp;
	}

	int res = 0;
	for (int i = x; i <= y; i++) {
		if (i % 13 != 0)
			res += i;
	}
	cout << res << endl;

	return 0;
}