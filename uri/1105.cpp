#include <iostream>

using namespace std;

int main() {
	int B, N;
	int from, to, value;

	while (true) {
		cin >> B >> N;
		if (!B && !N)
			break;

		int reserve[B];
		for (int i = 0; i < B; i++) {
			cin >> reserve[i];
		}
		for (int i = 0; i < N; i++) {
			cin >> from >> to >> value;
			reserve[from - 1] -= value;
			reserve[to - 1] += value;
		}

		bool flag = true;
		for (size_t i = 0; i < B; i++) {
			if (reserve[i] < 0) {
				flag = false;
				break;
			}
		}

		(flag) ?
			cout << "S" << endl
			: cout << "N" << endl;
	}


	return 0;
}
