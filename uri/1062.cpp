#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>

using namespace std;


int main()
{
	int n;
	while(true)
	{
		cin >> n;
		cout << "inicio" << endl;
		if (n==0)
			break;

		vector<int> trem;
		int vagao;
		while (true)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> vagao;
				trem.push_back(vagao);
			}

			if (trem[0]==0) break;

			stack<int> s;
			int index = 0;
			for (int i = 1; i <= n; i++)
			{
				s.push(i);
				while (s.size() > 0 and trem[index]==s.top())
				{
					s.pop();
					index++;
				}
			}

			printf("%s\n", (s.size()==0) ? "Yes" : "No");	
		}
		printf("\n");
	}

	return 0;
}