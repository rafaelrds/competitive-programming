#include <iostream>
using namespace std;

int main() {
	long long N, T, P;
	cin >> T;
	while (T--) {
		cin >> N >> P;
		int difficult = 0, cake = 0, problem;
		for (int i = 0; i < N; i++) {
			cin >> problem;
			if (problem <= P / 10) difficult++;
			else if (problem) >= P / 2) cake++;
		}
		if (difficult == 2 && cake == 1) cout << "yes" << endl;
		else cout << "no" << endl;

	}

	return 0;
}
