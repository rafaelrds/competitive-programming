#include <bits/stdc++.h> 

int main(){
	char nome[50];
	float sal, mont;
	scanf("%s",&nome);
	scanf("%f",&sal);
	scanf("%f",&mont);
	printf("TOTAL = R$ %.2f\n",(sal+mont*.15));
	
	
	return 0;
}
