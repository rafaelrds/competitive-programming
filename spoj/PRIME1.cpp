#include <stdio.h>
#include <map>

using namespace std;

map<int, bool> primes;

int is_prime(int n) {
    if (n == 1) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    primes[n] = true;
    return 1;
}


void solve(int n, int m) {
    for (int i = n; i <= m; i++) {
        if (primes[i]) {
            printf("%d\n", i);
        }
        else if (is_prime(i)) {
            primes[i] == true;
            printf("%d\n", i);
        }
    }
    printf("\n");
}


int main () {
    int t;
    scanf("%d", &t);
    int n, m;
    while(t--) {
        scanf("%d %d", &n, &m);
        solve(n, m);
    }    

    return 0;
}
