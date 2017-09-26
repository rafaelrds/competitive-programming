#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int numeros[] = {a,b,c};
	vector<int> num (numeros, numeros+3);
	sort(num.begin(), num.end());
	
	printf("%d\n",num[0]);
	printf("%d\n",num[1]);
	printf("%d\n",num[2]);
		
	printf("\n");
	printf("%d\n%d\n%d\n",a,b,c);
	
	return 0;	
}
