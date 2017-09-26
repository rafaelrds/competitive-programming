#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	
	int valor, valor_m;
	scanf("%d.%d", &valor, &valor_m);


	int n_100, n_50, n_20, n_10, n_5, n_2, n_1;
	int m_50, m_25, m_10, m_5, m_01;
	
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

	m_50 = valor_m / 50;
	valor_m -= m_50*50;
	m_25 = valor_m / 25;
	valor_m -= m_25*25;
	m_10 = valor_m / 10;
	valor_m -= m_10*10;
	m_5 = valor_m / 5;
	valor_m -= m_5*5;
	m_01 = valor_m;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n",n_100);
	printf("%d nota(s) de R$ 50,00\n",n_50);
	printf("%d nota(s) de R$ 20,00\n",n_20);
	printf("%d nota(s) de R$ 10,00\n",n_10);
	printf("%d nota(s) de R$ 5,00\n",n_5);
	printf("%d nota(s) de R$ 2,00\n",n_2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",n_1);
	printf("%d moeda(s) de R$ 0.50\n",m_50);
	printf("%d moeda(s) de R$ 0.25\n",m_25);
	printf("%d moeda(s) de R$ 0.10\n",m_10);
	printf("%d moeda(s) de R$ 0.05\n",m_5);
	printf("%d moeda(s) de R$ 0.01\n",m_01);
	
	
	
	return 0;	
}

