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
	int x, y, aux;
	cin >> x >> y;
	if ( x > y ){
		aux = y;
		y = x;
		x = aux;
	}

	int s = 0;
	for (int i = x+1 ; i < y ; i++){
		if(i % 2){
			s += i;
		} 
	}
	cout << s << endl;
	return 0;	
}
