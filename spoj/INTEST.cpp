#include <bits/stdc++.h> 
#include <stdio.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define M  1000000007
#define N 2000000000+5

#define uke cout << "aqui" << endl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;



int main(){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	int n,k,t, count = 0;
	
	scanf("%d %d",&n,&k);
	//char c = getchar_unlocked();
	//printf( "%c" , c );
	
	for(int i = 0; i < n; i++){
		scanf("%d",&t);
		if(t % k == 0){
			count++;
		}
	}
	printf("%d",count);
	
	
}
