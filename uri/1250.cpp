#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int N, T, i, j;
	cin >> N;
	for (i=0; i<N; i++)
	{
		cin >> T;
		int tiros[T];
		string pulos;

		int j;
		for (j=0; j<T; j++)
			scanf("%d", &tiros[j]);

		cin >> pulos;
		
		int ans = 0;	
		for (j=0; j<T; j++)
		{
			if (pulos[j] == 'S' and tiros[j] <= 2)
				ans++;
			if (pulos[j] == 'J' and tiros[j] > 2)
				ans++;
		}
			
		cout << ans << endl;
	}

	return 0;
}