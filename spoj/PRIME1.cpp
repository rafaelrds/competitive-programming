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

int main () {

  int x=10, y=20;                              // x:10 y:20
  std::swap(x,y);                              // x:20 y:10

  std::vector<int> foo (4,x), bar (6,y);       // foo:4x20 bar:6x10
  std::swap(foo,bar);                          // foo:6x10 bar:4x20

  std::cout << "foo contains:";
  for (std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
