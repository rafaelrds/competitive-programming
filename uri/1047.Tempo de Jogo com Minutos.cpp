#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	int hi, mi, hf, mf, duracao, horas, minutos;
	scanf("%d %d %d %d",&hi, &mi, &hf, &mf);
	
	int t_mini = hi*60 + mi;
	int t_minf = hf*60 + mf;
	
	if (t_mini > t_minf){
		duracao = ( (24*60) - t_mini) + t_minf;
	}else{
		duracao = t_minf - t_mini;
	}
	
	horas = duracao/60;
	duracao -= horas*60;
	minutos = duracao;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
	
	return 0;	
}
