#include <iostream>

using namespace std;

int main ()
{
	int N;
	while (cin >> N && N != 0)
	{
		int numbers[N+2];
		for (int i = 1; i <= N; i++)
		{
			cin >> numbers[i];
		}
		numbers[0] = numbers[N];
		numbers[N+1] = numbers[1];

		int ans = 0;
		for (int i = 1; i < N+1; i++)
		{
			if ((numbers[i] < numbers[i-1] and numbers[i] < numbers[i+1]) or
			    (numbers[i] > numbers[i-1] and numbers[i] > numbers[i+1]))
				ans++;
		}

		cout << ans << endl;
	}
	return 0;
}