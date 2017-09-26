#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	
	int valor;
	scanf("%d", &valor);
	printf("%d\n",valor);
	int n_100, n_50, n_20, n_10, n_5, n_2, n_1;

	n_100 = valor / 100;
	valor -= n_100*100;
	
	n_50 = valor / 50;
	valor -= n_50*50;
	
	n_20 = valor / 20;
	valor -= n_20*20;
	
	n_10 = valor / 10;
	valor -= n_10*10;
	
	n_5 = valor / 5;
	valor -= n_5*5;
	
	n_2 = valor / 2;
	valor -= n_2*2;
	
	n_1 = valor;
	
	printf("%d nota(s) de R$ 100,00\n",n_100);
	printf("%d nota(s) de R$ 50,00\n",n_50);
	printf("%d nota(s) de R$ 20,00\n",n_20);
	printf("%d nota(s) de R$ 10,00\n",n_10);
	printf("%d nota(s) de R$ 5,00\n",n_5);
	printf("%d nota(s) de R$ 2,00\n",n_2);
	printf("%d nota(s) de R$ 1,00\n",n_1);
	
	return 0;	
}

