#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int C;
	char T;
	float M[12][12];

	cin >> C >> T;
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 12; j++)
			cin >> M[i][j];

	float res = 0.0;
	for (int i = 0; i < 12; i++)
		res += M[i][C];

	if (T == 'M')
		res /= 12;

	printf("%.1f\n", res);

	return 0;
}
