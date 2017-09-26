#include <iostream>

using namespace std;

int main() {
	double res = 0;
	for (int i = 1; i <= 100; i++) {
		res += 1.0/i;
	}
	printf("%.2f\n", res);

	return 0;
}