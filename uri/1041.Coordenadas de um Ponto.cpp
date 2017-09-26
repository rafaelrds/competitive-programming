#include <stdio.h> 

#define PI 3.14159

using namespace std;

int main(){
	float x, y;
	scanf("%f %f", &x, &y);
	
	if( x == 0 && y == 0)
		printf("Origem");
	else if (x == 0 && y != 0)
		printf ("Eixo Y");
	else if (x != 0 && y == 0)
		printf("Eixo X");
	else if( x > 0){
		if ( y  > 0)
			printf("Q1");
		if (y < 0)
			printf("Q4");
	}
	else if( x < 0 ){
		if ( y < 0)
			printf("Q3");
		if (y > 0)
			printf("Q2");
	}
	printf("\n");
	
	return 0;	
}
