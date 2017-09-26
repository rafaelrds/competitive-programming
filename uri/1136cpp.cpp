#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main ()
{
	int N, B;
	while(cin >> N >> B and (N!=0 or B!=0))
	{
		int i, j;
		vector<int> balls(B);
		for (i = 0; i < B; i++)
			cin >> balls[i];

		sort(balls.begin(), balls.end());

		vector<bool> checks (N+1, false);
		for (i=0; i<B; i++)
			for (j=0; j <= i; j++)
				checks[balls[i] - balls[j]] = true;
		
		int flag = 1;
		for (i=0; i<N+1; i++)
			if (checks[i] == false)
				flag = 0;

		printf("%c\n", (flag) ? 'Y' : 'N');
	}
	return 0;
}