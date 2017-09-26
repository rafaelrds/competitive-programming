#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int senha;
	while (1){
		cin >> senha;
		if (senha == 2002){break;}
		cout << "Senha Invalida\n";
	}
	cout << "Acesso Permitido" << endl;
	
	return 0;
}