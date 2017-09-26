#include <stdio.h>
#include <ctgmath>

#define PI 3.14159

using namespace std;

int main() {
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double delta = (b * b) - (4 * a * c);
	double x1 = (-b + sqrt(delta) ) / (2 * a);
	double x2 = (-b - sqrt(delta) ) / (2 * a);
	
	if(delta <= 0 or a == 0){
		printf("Impossivel calcular\n");
	}
		
	else{
		// printf("delta = %.5lf\n",delta);
		printf("R1 = %.5lf\n",x1);
		printf("R2 = %.5lf\n",x2);
	}
		
	return 0;	
}
