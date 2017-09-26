#include <iostream>
#include <cmath>

using namespace std;

int solve(int c, int d)
{
	int ans = (int) (pow(26,c) * pow(10,d));
	return ans==1 ? 0 : ans;
}


int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int c,d;
		cin >> c >> d;
		cout << solve(c,d) << endl;
	}
	return 0;
}