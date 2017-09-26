#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

float distancia_pontos(float x1, float x2, float y1, float y2){
	return sqrt( pow((x2-x1),2) + pow((y2-y1),2) );
}

int main(){
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	printf("%.4f\n",distancia_pontos(x1,x2,y1,y2));
	
	
	return 0;
}
