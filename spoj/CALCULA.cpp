#include <stdio.h>

using namespace std;


int main(){
	int a,b, soma, i; 
	i = 0; 
	do{
	 scanf("%i", &a); 
	 soma = 0; 
	 if(!a)
	    break;
	 do{ 
		scanf("%i",&b); 
		soma += b; 
	}while(--a); 
	 
	printf("Teste %i\n%i\n\n",++i,soma); 
	}while(a+b);

	return 0;
}

