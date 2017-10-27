#include <stdio.h>
#include <map>

using namespace std;

map<int, bool> primes;

bool is_prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve(int n) {
    if (primes[n]) {
        printf("Prime\n");
    }
    else if (is_prime(n)) {
        primes[n] = true;
        printf("Prime\n");
    }
    else {
        printf("Not Prime\n");
    }
}


int main () {
    int t;
    scanf("%d", &t);
    int n;
    while(t--) {
        scanf("%d", &n);
        solve(n);
    }    

    return 0;
}
