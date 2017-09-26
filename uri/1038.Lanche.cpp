#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	float lanches[] = {4.0, 4.5, 5.0, 2.0, 1.5};
	int cod, n;
	scanf("%d %d", &cod, &n);
	
	printf("Total: R$ %.2f\n", (n * lanches[cod-1]));
	
	return 0;
}
