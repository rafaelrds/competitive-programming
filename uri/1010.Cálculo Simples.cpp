#include <bits/stdc++.h> 

int main(){
	int cod1, n1, cod2, n2;
	float p1, p2;
	scanf("%d %d %f",&cod1, &n1, &p1);
	scanf("%d %d %f",&cod2, &n2, &p2);
	printf("VALOR A PAGAR: R$ %.2f\n", (n1*p1 + n2*p2));
	
	return 0;
}
