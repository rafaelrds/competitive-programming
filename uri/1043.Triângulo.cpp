#include <stdio.h> 

#define PI 3.14159;

using namespace std;

bool verifica_triangulo(float a, float b, float c){
	bool c1,c2,c3;
	c1 = a + b > c;
	c2 = a + c > b;
	c3 = b + c > a;
	return c1 && c2 && c3;
}

float area_trapezio(float a, float b, float h){
	return (a+b)*h/2;
}

float perimetro_triangulo(float a, float b, float c){
	return a+b+c;
}

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(verifica_triangulo(a,b,c)){
		printf("Perimetro = %.1f\n",perimetro_triangulo(a,b,c));
	}
	else{
		printf("Area = %.1f\n",area_trapezio(a,b,c));
	}
	
	
	
	return 0;
}



