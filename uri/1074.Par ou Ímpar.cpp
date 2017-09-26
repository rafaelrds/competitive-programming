 #include <bits/stdc++.h> 
#include <stdio.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
#define M 1000000000
#define N 2000000000+5
 
#define aqui cout << "aqui" << endl;

#define pb push_back
#define lb lower_bound
#define ub upper_bound
 
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vv;


int main (){
	//freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
	int n, x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		string ans;
		
		(x % 2) ? ans += "ODD " : ans += "EVEN ";
		(x > 0) ? ans += "POSITIVE" : ans += "NEGATIVE";
		if (x == 0) ans = "NULL";
		
		printf("%s\n",ans.c_str());
	}
	
	
	
	

	return 0;	
}
