#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
	int N, B;

	while (scanf("%d %d", &N, &B))
	{
		if (N==0 && B==0) break;
		
		int balls[N+1];	
		int i, e;
		for (i=0; i < B; i++)
		{
			scanf("%d", &e);
			balls[i] = e;
		}
		
		sort(balls, balls + B);
		
		int checks[N+1];
		memset(checks, 0, sizeof(checks));
		checks[0] = 1;

		for (int i = 0; i < B; i++)
			for (int j = 0; j < i; j++)
				checks[balls[i] - balls[j]] = 1;
		
		int flag = 1;
		for (int i = 0; i < N + 1 ; i++)
			if (!checks[i])
				flag = 0;
		
		printf("%s\n", (flag) ? "Y" : "N");
		
	}
	return 0;
}