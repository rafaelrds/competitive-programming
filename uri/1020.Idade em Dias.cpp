#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	int idade, ano, mes, dia;
	scanf("%d",&idade);
	
	ano = idade/365;
	idade -= ano * 365;
	
	mes = idade/30;
	idade -= mes * 30;
	
	dia = idade;
	
	printf("%d ano(s)\n",ano);
	printf("%d mes(es)\n",mes);
	printf("%d dia(s)\n",dia);
	
		
	return 0;
}
