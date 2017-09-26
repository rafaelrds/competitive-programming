#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;


int main(){
	float a, n, rea;
	int r = 0.0;
	scanf("%f",&a);
	if( a <= 400.00) {
		r = 15;
	}
	else if(a <= 800.00){
		r = 12;
	}
	else if(a <= 1200.00){
		r = 10;
	}
	else if(a <= 2000.00){
		r = 7;
	}
	else if (a > 2000.00){
		r  = 4;
	}
	rea = a*(r/100.0);
	n = a + rea;
	
	printf("Novo salario: %.2f\n",n);
	printf("Reajuste ganho: %.2f\n",rea);
	printf("Em percentual: %d %%\n",r);
	
	return 0;	
}
