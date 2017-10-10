#include <iostream>
#include <math.h>

using namespace std;

// 1  2  4  8
// 2  4  8 16
// 4  8 16 32
// 8 16 32 64
// if (row == col) matrix[row][col] = 2^(2*row)
// elif (row < col) matrix[row][col] = matrix[row][col - 1] * 2
// else matrix[row][col] = matrix[col][row]

void solve(int N)
{
	int matrix[N][N], T;
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			if (row == col) matrix[row][col] = pow(2.0, 2 * row);
			else if (row < col) matrix[row][col] = matrix[row][col - 1] * 2;
			else matrix[row][col] = matrix[col][row];
		}
	}
	T = log10(matrix[N-1][N-1]) + 1;
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			printf("%*d", T, matrix[row][col]);
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
