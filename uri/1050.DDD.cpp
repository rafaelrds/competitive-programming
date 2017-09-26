#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;


int main(){
	char* A[100];
	A[61] = "Brasilia";
	A[71] = "Salvador";
	A[11] = "Sao Paulo";
	A[21] = "Rio de Janeiro";
	A[32] = "Juiz de Fora";
	A[19] = "Campinas";
	A[27] = "Vitoria";
	A[31] = "Belo Horizonte";
	
	int e;
	cin >> e;
	
	if ( e < 0 || e > 100  || strlen(A[e]) < 5 )
		cout << "DDD nao cadastrado" << endl;
	else 
		cout << A[e] << endl;
	
	
	
	
	return 0;	
}
