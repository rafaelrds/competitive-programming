#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;

/* Pedro gives c!, Lucas gives pow(a,b)
   Returns true if pedro wins */
bool solve(int a, int b, int c) 
{
	float power = 0, facto = 0;
	for (int i = 0; i < b; i++)
		power += log10(a);
	for (int i = 2; i <= c; i++)
		facto += log10(i);
	return facto > power;
}

int main()
{
	int n;
	cin >> n;
	bool pedro_wins[n];
	int pedro, lucas;
	memset(pedro_wins, false, n+1);
	for (int i = 1; i <= n; i++)
	{
		int a, b, c;
		scanf("%d^%d", &a, &b);
		scanf("%d!", &c);
		pedro_wins[i] = solve(a,b,c);
		if(pedro_wins[i]) pedro++;
		else lucas++;
	}

	if (pedro > lucas) cout << "Campeao: Pedro!" << endl;
	else if (lucas > pedro) cout << "Campeao: Lucas!" << endl;
	else cout  << "A competicao terminou empatada!" << endl;

	for (int i = 1; i <= n; ++i)
		printf("Rodada #%d: %s foi o vencedor\n", i, (pedro_wins[i]) ? "Pedro" : "Lucas");
	

	return 0;
}