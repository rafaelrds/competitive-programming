#include <iostream>

using namespace std;

int main () {
	int x,y;
	cin >> x;
	y = x - 1;
	while (y <= x)
		cin >> y;

	
	int s = 0, i = 0;
	while (s < y) {
		s += x;
		x++;
		i++;
	}

	cout << i << endl;

	return 0;
}