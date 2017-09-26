#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

string zero[] = {".*",
				 "**",
				 ".."};

string um[] = {"*.",
			   "..",
			   ".."};

string dois[] = {"*.",
				 "*.",
				 ".."};

string tres[] = {"**",
				 "..",
				 ".."};

string quatro[] = {"**",
				   ".*",
				   ".."};

string cinco[] = {"*.",
				  ".*",
				  ".."};

string seis[] = {"**",
				 "*.",
				 ".."};

string sete[] = {"**",
			     "**",
			     ".."};

string oito[] = {"*.",
				 "**",
				 ".."};

string nove[] = {".*",
				 "*.",
				 ".."};

string braile[10][3] = {zero, um, dois, tres, quatro, cinco, 
					    seis, sete, oito, nove};

int braile_to_int (string numero[])
{
	for (int i = 0; i < 10; ++i)
	{
		int mat = 0;
		for (int j = 0; j < 3; ++j)
			if (braile[i][j] == numero[j])
				mat++;
		
		if (mat==3)
			return i;
	}
	return -1;
}

int main()
{
	int D;
	
	while (cin >> D && D != 0)
	{
		char Q;
		cin >> Q;
		if (Q=='S')
		{
			string s;
			cin >> s;
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < D; ++j)
				{
					int c = s[j] - '0';		
					cout << braile[c][i];
					(j < D-1) ? cout << " " : cout << endl;
				}
			}	
		}
		if (Q=='B')
		{
			string input[D][3];
			for (int i = 0; i < 3; ++i)
				for (int j = 0; j < D; ++j)
					cin >> input[j][i];

			for (int i = 0; i < D; ++i)
				cout << braile_to_int(input[i]);
			
			cout << endl;
		}
			
	}
	
	return 0;
}