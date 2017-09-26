#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

bool verifica_triangulo(float a, float b, float c){
	return a >= b+c;
}

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	int v[3] = {a,b,c};
	sort(v, &v[3]);
	a = v[2]; b = v[1]; c = v[0];
	
	if(!verifica_triangulo(a,b,c)){	
		if(pow(a,2) == pow(b,2) + pow(c,2) )
			printf("TRIANGULO RETANGULO");
		else if (pow(a,2) > pow(b,2) + pow(c,2) )
			printf("TRIANGULO OBTUSANGULO");
		else if (pow(a,2) < pow(b,2) + pow(c,2) )
			printf("TRIANGULO ACUTANGULO");
		printf("\n");

		if(a==b && b == c)
			printf("TRIANGULO EQUILATERO\n");
		else if (a==b ^ b==c)
			printf("TRIANGULO ISOSCELES\n");
		
		}
	else
		printf("NAO FORMA TRIANGULO\n");

	return 0;
}
