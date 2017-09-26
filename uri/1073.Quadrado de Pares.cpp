#include <bits/stdc++.h> 
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
	int n;
	scanf("%d",&n);
	for (int i = 2; i <= n ; i+=2){
		printf("%d^2 = %d\n",i,i*i);
	}
	
	return 0;	
}
