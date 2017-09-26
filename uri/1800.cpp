#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
	map<int, bool> rooms;
	int q, e;
	cin >> q >> e;
	for (int i = 0; i < e; ++i)
	{
		int a;
		cin >> a;
		rooms[a] = true;
	}

	for (int i = 0; i < q; ++i)
	{
		int b;
		cin >> b; 
		printf("%d\n", (rooms[b]) ? 0 : 1);
		rooms[b] = true;
	}

	return 0;
}