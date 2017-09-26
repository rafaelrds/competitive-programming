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
	int e, p = 0 ,np = 0 , po = 0, npo = 0;
	for( int i = 0; i  < 5 ; i++){
		cin >> e;
		if (e % 2 == 0)	p++;
		else  np++;
		if (e > 0) po++;
		if (e < 0) npo ++;
		
	}
	cout << p << " valor(es) par(es)" << endl;
	cout << np << " valor(es) impar(es)" << endl;
	cout << po << " valor(es) positivo(s)" << endl;
	cout << npo << " valor(es) negativo(s)" << endl;
	
	return 0;	
}
