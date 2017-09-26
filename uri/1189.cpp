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
	double T[M_SIZE][M_SIZE];
	for (int i = 0; i < M_SIZE; i++) {
		for (int j = 0; j < M_SIZE; j++) {
			cin >> M[i][j];
			T[j][i] = M[i][j];
		}
	}

	for (int i = 0; i < (M_SIZE - 1)/2; i++) {
		for (int j = 0; j < M_SIZE; j++) {
			if (j > i and j < M_SIZE - i - 1) {
				size++;
				ans += T[i][j];
			}
		}
	}

	if (O == 'S') printf("%.1f\n", ans);
	else printf("%.1f\n", ans/size);


	return 0;
}
