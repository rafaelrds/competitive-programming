#include <bits/stdc++.h> 

#define PI 3.14159

float area_triangulo(float base, float altura){
	return base*altura/2;
}

float area_circulo(float raio){
	return PI * pow(raio,2);
}

float area_trapezio(float base_a, float base_b, float altura){
	return (base_a + base_b) * altura/2;
}

float area_quadrado(float lado){
	return pow(lado,2);
}

float area_retangulo(float lado_a, float lado_b){
	return lado_a * lado_b;
}
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("TRIANGULO: %.3f\n", area_triangulo(a,c));
	printf("CIRCULO: %.3f\n", area_circulo(c));
	printf("TRAPEZIO: %.3f\n", area_trapezio(a,b,c));
	printf("QUADRADO: %.3f\n", area_quadrado(b));
	printf("RETANGULO: %.3f\n", area_retangulo(a,b));
	
	return 0;
}
