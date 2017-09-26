#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	int N, M, ans = 0;
	while (scanf("%d %d", &N, &M) != EOF)
	{
		int i, ans = 0;
		for (i=N; i <= M; i++)
		{
			int numbers[10];
			memset(numbers, 0, sizeof(numbers));
			int number = i;
			while (number != 0)
			{
				int a = number % 10;
				numbers[a]++;
				number -= a, number /= 10;
			}

			bool flag = true;
			for (int j = 0; j < 10; j++)
				if (numbers[j] > 1)
					flag = false;
			
			if (flag)
				ans++;
		}
		
		cout << ans << endl;

		ans = 0;
	}
	return 0;
}