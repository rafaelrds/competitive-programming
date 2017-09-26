#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	float KM_L = 12.0;
	int t, v;
	scanf("%d %d",&t, &v);
	
	printf("%.3f\n", (t*v/KM_L));
	
	return 0;
}
