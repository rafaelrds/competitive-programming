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
	double pay, tot;
	cin >> pay;
	cout << fixed << setprecision(2);
	
	if (pay < 2000.00){
		cout << "Isento" << endl;
	}
	
	else{
		pay -= 2000.00;
		if(pay <= 1000.00){
			tot = pay * 0.08;
		}
		else{
			pay -= 1000;
			if(pay <= 1500)
				tot = (1000) * 0.08 + (pay) * 0.18;
			else{
				pay -= 1500;
				tot = (1000) * 0.08 + (1500) * 0.18 + (pay) * 0.28;
			}
		}
		
		cout << "R$ " << tot << endl;
	}
	
	
	return 0;
}
