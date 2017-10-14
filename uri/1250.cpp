#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int N, T, j;
	cin >> N;
	while (N--)
	{
		cin >> T;
		int tiros[T];
		string pulos;

		for (int j = 0; j < T; j++)
			cin >> tiros[j];

		cin >> pulos;

		int ans = 0;
		for (int j = 0; j < T; j++)	{
			if (pulos[j] == 'S' and tiros[j] <= 2)
				ans++;
			if (pulos[j] == 'J' and tiros[j] > 2)
				ans++;
		}

		cout << ans << endl;
	}

	return 0;
}
