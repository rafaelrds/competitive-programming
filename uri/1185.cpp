#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char O;
	cin >> O;

	float ans = 0.0;
	int size = 0;
	int M_SIZE = 12;
	float M[M_SIZE][M_SIZE];
	for (int i = 0; i < M_SIZE; i++) {
		for (int j = 0; j < M_SIZE; j++) {
			cin >> M[i][j];
			if (j > M_SIZE - i - 1) {
				size++;
				ans += M[i][j];
			}
		}
	}

	if (O == 'S') printf("%.1f\n", ans);
	else printf("%.1f\n", ans/size);


	return 0;
}
