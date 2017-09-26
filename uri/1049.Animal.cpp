#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;


int main(){
	string i1,i2,i3;
	cin >> i1 >> i2 >> i3;
	
	if(i1 == "vertebrado"){
		if(i2 == "ave"){
			if(i3 == "carnivoro")
				cout << "aguia" << endl;
			else if(i3 == "onivoro")
				cout << "pomba" << endl;
		}
		else if(i2 == "mamifero"){
			if(i3 == "onivoro")
				cout << "homem" << endl;
			if(i3 == "herbivoro")
				cout << "vaca" << endl;
		}
	}
	else if (i1 == "invertebrado"){
		if (i2 == "inseto"){
			if (i3 == "hematofago")
				cout << "pulga" << endl;
			else if (i3 == "herbivoro")
				cout << "lagarta" << endl;
		}
		else if(i2 == "anelideo"){
			if (i3 == "hematofago")
				cout << "sanguessuga" << endl;
			else if (i3 == "onivoro")
				cout << "minhoca" << endl;
		}
	}
	
	
	
		
	return 0;
}
