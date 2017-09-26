#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	int a,b,result;
	scanf("%d %d",&a, &b);
	if(b >= a){
		result = b-a;
	}else{
		result = (24-a) + b;
	}
	printf("O JOGO DUROU %d HORA(S)\n", result);
	
		
	return 0;	
}
