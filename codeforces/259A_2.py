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
	int n;
	scanf("%d",&n);
	
	int b = n/2;
	int d = 0, maxd = 1;
	bool dw = true;
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= n ; j++){
			if (j > b and dw == true){
				printf("D");
				d++;
				if(d == maxd)
					dw = false;
			}
			else{
				printf("*");
			}
		}
		if(i <= n/2 ){
			d = 0; maxd+=2; dw = true; b--;
		}
		else{
			d = 0; maxd-=2; dw = true; b++;
		}
		
		printf("\n");
	}
	
	
	
	return 0;	
}