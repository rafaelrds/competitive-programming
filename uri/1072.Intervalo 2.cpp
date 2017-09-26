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
	int n, v, k = 0;
	scanf("%d",&n);
	for (int i = 0 ; i < n; i ++){
		scanf("%d",&v);
		if( v >= 10 && v <= 20) k++;
	}
	
	printf("%d in\n",k);
	printf("%d out\n",(n-k));
	
	
	
	return 0;
}
