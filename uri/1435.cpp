#include <iostream>
#include <stdio.h>

using namespace std;

void solve(int N)
{
	int matrix[N][N];
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			matrix[row][col] = min(N - row, min(N - col, min(row + 1, col + 1)));
		}
	}
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			printf("%3d", matrix[row][col]);
			if (col != N - 1) cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main () {
	int N;
	while (true) {
		cin >> N;
		if (N == 0) break;
		solve(N);
	}

	return 0;
}
