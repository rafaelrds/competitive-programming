#include <iostream>
#include <string>

using namespace std;

int main()
{
	string propina, propina2;
	cin >> propina >> propina2;
	
	int count = 0;
	string cpf(11, '0'), cash(17, '0');
	int j = 0;
	bool flag = false;
	for (int i = 0; i < propina.size(); ++i)
	{
		if ((propina[i] >= '0' and propina[i] <= '9') and !flag)
		{
			cpf[j] = propina[i];
			j++;
			if (j==11)
			{
				flag = true;
				j = 0;
			}
		}
		else if (flag and (propina[i] >= '0' and propina[i] <= '9')
			or propina[i] == '.')
		{
			cash[j] = propina[i];
		}
	}
	cout << cpf << endl;
	cout << cash << endl;
	for (int i = 0; i < propina2.size(); ++i)
	{
		if ((propina2[i] >= '0' and propina2[i] <= '9')
			or propina2[i] == '.')
			cout << propina2[i];
	} cout << endl;

	return 0;
}