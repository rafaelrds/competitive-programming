#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n = 0, i = 0;
	float res = 0;
	while (true) {
		cin >> n;
		if (n < 0) break;
		res += n;
		i++;
	}
	printf("%.2f\n", res/i);


	return 0;
}