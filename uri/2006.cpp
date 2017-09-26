#include <iostream>

using namespace std;

int main()
{
	int T, a, ans = 0;

	cin >> T;
	for (int i = 0; i < 5; ++i)
	{
		cin >> a;
		if (a==T) ans++;
	}

	cout << ans << endl;

	return 0;
}