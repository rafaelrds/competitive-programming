#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main(){
	int n, h,m,s;
	scanf("%d",&n);
	int H = 60*60;
	int M = 60;
	
	h = n/H;
	n -= h*H;
	
	m = n/M;
	n -= m*M;
	
	s = n;
	
	printf("%d:%d:%d\n",h,m,s);
	

	
	
	
	return 0;	
}
