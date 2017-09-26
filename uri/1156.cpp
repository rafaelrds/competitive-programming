#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	// S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
	double res = 0;
	int i = 1, j = 1;
	while (i <= 39) {
		res += (float) i / j;
		i += 2;
		j *= 2;
	}
	printf("%.2f\n", res);

	return 0;
}