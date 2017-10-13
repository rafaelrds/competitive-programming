#include <iostream>

using namespace std;

int main() {
	int N;
	char ans[] = {'A', 'B', 'C', 'D', 'E'};
	int count, current;
	int answer;
	while (true) {
		cin >> N;
		if (!N) break;

		for (size_t question = 0; question < N; question++) {
			count = 0, answer = 0;

			for (size_t letter = 0; letter < 5; letter++) {
				cin >> current;
				if (current <= 127) {
					count++;
					answer = letter;
				}
			}
			if (count == 1) {
				cout << ans[answer] << endl;
			} else {
				cout << "*" << endl;
			}
		}
	}

	return 0;
}
