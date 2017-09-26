#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{	
	string n;
	int a;
	while (cin >> n)
	{
		if (n=="-1") break;
		if (n.size()==1)
		{
			sscanf(n.c_str(), "%d", &a);
			printf("0x%X\n", a);
		}
		else
		{
			if (n[1]=='x')
			{
				sscanf(n.c_str(), "0x%X", &a);
				printf("%d\n", a);
			}
			else
			{
				sscanf(n.c_str(), "%d", &a);
				printf("0x%X\n", a);
			}
		}
	}

	return 0;
}