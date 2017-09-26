#include <iostream>

using namespace std;

int main() {
	char O;
	cin >> O;

	float M[12][12];

	float sum = 0.0;
	int size = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> M[i][j];
			if (j < i) {
				size++;
				sum += M[i][j];
			}
		}
	}

	if (O == 'S') cout << sum << endl;
	else cout << sum/size << endl;

	return 0;
}
