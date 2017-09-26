#include <vector>
#include <iostream>

using namespace std;


int dp[21][21][1001];
int trufas[21][21][1001];
int ans = 0;

int solve(int x, int y, int t)
{
	if (x < 0 || x > 20 || y < 0 || y > 20 || t > 1000) //fora do plano
	{
		// cout << x <<  " " << y << " " << t << endl;
		return 0;
	}
	
	if(dp[x][y][t] >= 0) return dp[x][y][t]; 
	
	int tem_trufa = trufas[x][y][t];
	int value = 0;
	value = max(value, solve(x+1,y,t+1)+ tem_trufa);
	value = max(value, solve(x,y+1,t+1)+ tem_trufa);
	value = max(value, solve(x-1,y,t+1)+ tem_trufa);
	value = max(value, solve(x,y-1,t+1)+ tem_trufa);
	value = max(value, solve(x,y,t+1)  + tem_trufa);
		
	return dp[x][y][t] = value;
}

int main()
{
	for(int i = 0; i <= 20; i++)
		for(int j = 0; j <= 20; j++)
			for(int k = 0; k <= 1000; k++)
			{
				dp[i][j][k] = -1;
				trufas[i][j][k] = 0;
			}
	
	int n, x, y, t;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x >> y >> t;	
		trufas[x][y][t]++;
	}
	//cout << "pronto " << endl;
	cout << solve(6, 6, 0) << endl;
	
	
	return 0;
}