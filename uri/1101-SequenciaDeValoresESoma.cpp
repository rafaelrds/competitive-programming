#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int m,n, sum;

	while (1){
		cin >> m >> n;
		if ( m <= 0 or n <= 0) break;

		if (m > n)
			swap(m,n);
		
		sum = 0;
		for (int i = m; i <= n; ++i)
		{
			printf("%d ", i);
			sum += i;
		}
		printf("Sum=%d\n", sum);
		
	}

	return 0;
}