#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

int bi_search(vector<int> v, int n){
	int begin = 0;
	int end = v.size() - 1;
	int middle;
	
	while (begin < end)
	{
		middle = (end + begin) / 2;
		if (v[middle] < n)
            begin = middle + 1;
        else if (v[middle] > n || (middle > 0 && v[middle-1] == n))
            end = middle - 1;
	    else 
			return middle + 1;
    }
	if (v[middle] == n) return middle + 1;
	return -1;
}

int main()
{
	int n, q, k = 0;
	vector<int> marbles;
	int marble;
	
	while (cin >> n >> q and n != 0 and q != 0)
	{
		printf("CASE# %d:\n", (k++)+1);
		marbles.clear();

		for (int i = 0; i < n; ++i)
		{
			cin >> marble;
			marbles.push_back(marble);
		}

		sort(marbles.begin(), marbles.end());

		for (int i = 0; i < q; ++i)
		{
			int key;
			cin >> key;

			int ans = bi_search(marbles, key);

			if (ans != -1)
				printf("%d found at %d\n", key, ans);
			else
				printf("%d not found\n", key);
		}
	}
		
	return 0;
}