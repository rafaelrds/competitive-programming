#include <iostream>

using namespace std;

int solve (int altura, int comprimento)
{
	int e, ans = 0, prev = altura;
	for (int i = 0; i < comprimento; ++i)
	{
		cin >> e;
		if (e < prev)
			ans += (prev - e);
		prev = e;
	}
	return ans;
}


int main ()
{
	int altura, comprimento, ans;
	
	while (cin >> altura >> comprimento && altura != 0 && comprimento != 0)
	{
		cout << solve(altura, comprimento) << endl;
	}
	
	return 0;
}