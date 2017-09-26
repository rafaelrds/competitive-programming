#include <iostream>

using namespace std;


int main()
{
	int ans = 0, N;
	
	while (cin >> N and N != 0)
	{
		for (int i = 1; i < N+1; ++i)
			ans += i*i;
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}