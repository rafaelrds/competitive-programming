#include <iostream>
#include <vector>

using namespace std;

void solve(int n)
{
	char digits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D', 'E', 'F'};
	vector<char> res;
	vector<int> ans;
	for (int base = 2; base <= 16; ++base)
	{
		int r = n;
		while(r > 0)
		{
			res.push_back(digits[r%base]);
			r /= base;
		}

		bool is_p = true;
		for (int i = 0, j = res.size()-1; i < j; ++i, --j)
		{
			if(res[i] != res[j])
			{
				is_p = false;
				break;
			}
		}
		if (is_p) ans.push_back(base);

		res.clear();
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i];
		(i != ans.size()-1) ? cout << " " : cout << endl;
	}
	if (ans.empty()) cout << -1 << endl;
}

int main()
{
	int T, N;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> N;
		solve(N);
	}

	return 0;
}