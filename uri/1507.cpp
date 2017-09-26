#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;

		int q;
		cin >> q;
		string query;
		for (int i = 0; i < q; ++i)
		{
			cin >> query;
			int index = 0;
			int len_q = query.length();
			bool ans = false;
			for (int i = 0; i < s.length(); ++i)
			{
				if (s[i]==query[index]) index++;
				if (len_q==index)
				{
					ans = true;
					break;
				}
			}
			printf("%s\n", (ans) ? "Yes" : "No");
		}
	}
	return 0;
}