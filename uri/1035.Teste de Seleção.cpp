 #include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;


/* Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C 
e se D for maior do que A e a soma de C com D for maior que a soma de A e B 
e se C e D, ambos, forem positivos e se a variável A for par 
escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
*/


int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a, &b, &c, &d);
	if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a % 2 == 0)
	    printf("Valores aceitos\n");
	else
	    printf("Valores nao aceitos\n");
	    
	return 0;
}
