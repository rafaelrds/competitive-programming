#include <iostream>

using namespace std;

// 1 3 3 2
// 3 1 2 3
// 3 2 1 3
// 2 3 3 1
// if (i == j) m[row][col] = 1

// 1 3 3 3 3 3 2
// 3 1 3 3 3 2 3
// 3 3 1 3 2 3 3
// 3 3 3 2 3 3 3
// 3 3 2 3 1 3 3
// 3 2 3 3 3 1 3
// 2 3 3 3 3 3 1
// diagonal principal = 1
// diagonal secundaria = 2
// demais = 3
void solve(int N) {
	int matrix[N][N];
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			if (row == N - col - 1) matrix[row][col] = 2;
			else if (row == col) matrix[row][col] = 1;
			else matrix[row][col] = 3;
		}
	}
	for (size_t row = 0; row < N; row++) {
		for (size_t col = 0; col < N; col++) {
			cout << matrix[row][col];
		}
		cout << endl;
	}
}


int main() {
	int N;
	while (cin >> N) {
		solve(N);
	}

	return 0;
}
