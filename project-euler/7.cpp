#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int is_prime(unsigned long long number){
    if (number <= 1) return 0;
	unsigned long long i;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int nth_prime(unsigned long long nth_prime){
	long long number = 3;
	long long n_prime = 2;
	
	while(n_prime < nth_prime){
		number += 2;
		if(is_prime(number)) {
			n_prime++;
		}
	}
	return number;
}

int main() {
	long long i = 1e5;
	long long  j = nth_prime(i);
		
	printf("%ld is the ", j);
	printf("%dth prime ", i);
	
	
	
	return 0;
}
