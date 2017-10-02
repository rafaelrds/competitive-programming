#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;


int main(){
	int n, a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	
	int t_a = a1+a2+a3, t_b = b1+b2+b3;
	t_b = ceil(t_b / 10.0) ;
	t_a =  ceil(t_a / 5.0) ;
	if (t_a + t_b > n)
		cout << "NO";
	else
		cout << "YES";
	
	
	
	return 0;	
}