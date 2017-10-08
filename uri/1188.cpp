#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char O;
	cin >> O;

	double ans = 0.0;
	int size = 0;
	int M_SIZE = 12;
	double M[M_SIZE][M_SIZE];
	for (int row = 0; row < M_SIZE; row++) {
		for (int col = 0; col < M_SIZE; col++) {
			cin >> M[row][col];
		}
	}

	for (int row = M_SIZE/2; row < M_SIZE; row++) {
		for (int col = 0; col < M_SIZE; col++) {
				if (col > M_SIZE - 1 - row and col < row) {
					size++;
					ans += M[row][col];
				}
		}
	}

	if (O == 'S') printf("%.1f\n", ans);
	else printf("%.1f\n", ans/size);


	return 0;
}
