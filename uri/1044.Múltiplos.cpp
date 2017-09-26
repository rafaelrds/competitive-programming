#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int a,b, aux;
	scanf("%d %d",&a,&b);
	if (a > b){
		a = aux, a = b,	b = a;
		
	}
	if( b % a == 0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
	return 0;
}
