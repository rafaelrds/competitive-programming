#include <stdio.h> 

#define PI 3.14159

using namespace std;

int main(){
	float n1,n2,n3,n4;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	float media = ( (2*n1) + (3*n2) + (4*n3) + (n4) ) / 10;

	printf("Media: %.1f\n",media);
	if (media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(media >= 5.0){
		printf("Aluno em exame.\n");
		float nota_e; 
		scanf("%f",&nota_e);
		printf("Nota do exame: %.1f\n",nota_e);
		media = (media + nota_e) / 2.0;
		if( media >= 5.0  ) {
			printf("Aluno aprovado.\n");
		}
		else{
			printf("Aluno reprovado.\n");
		}	
		printf("Media final: %.1f\n",media);
	}
	else
		printf("Aluno reprovado.\n");
	
	return 0;	
}
