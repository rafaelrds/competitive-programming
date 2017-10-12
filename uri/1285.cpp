#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
	int N, M, ans = 0;
	while (scanf("%d %d", &N, &M) != EOF) {
		int i, ans = 0;
		for (i=N; i <= M; i++) {
			int numbers[10];
			memset(numbers, 0, sizeof(numbers));
			int number = i;
			bool flag = true;
			while (number != 0)	{
				int a = number % 10;
				if (++numbers[a] > 1) {
					flag = false;
					break;
				}
				number -= a, number /= 10;
			}
			if (flag)
				ans++;
		}

		cout << ans << endl;

		ans = 0;
	}
	return 0;
}
