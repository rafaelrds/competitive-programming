#include <stdio.h>

#define PI 3.14159

double sphere(double rad){ 
	double result;               
 
	result = rad * rad * rad;
	result = 4 * PI * result / 3;
	return result;              
}

int main(){
	double raio, volume;
	scanf("%lf",&raio);
	volume = sphere(raio);
	printf("VOLUME = %.3f\n",volume);
	return 0;
}
