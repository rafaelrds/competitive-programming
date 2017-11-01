#include <iostream>
#include <cmath>
#include <set>
#include <cstring>

using namespace std;

set<long long> sieve_set;

#define MAX_SIEVE 1000000
void precompute() {
    int n = MAX_SIEVE;
    bool sieve[n + 1];
    memset(sieve, true, sizeof(sieve));

    for (int p = 2; p*p <= n; p++) {
        if (sieve[p] == true) {
            for (int i = p*2; i <= n; i += p)
                sieve[i] = false;
        }
    }

    for (long long p = 2; p <= n; p++) {
        if (sieve[p])
            sieve_set.insert(p * p);
    }
}

void solve(long long x) {
    if (sieve_set.count(x) != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    precompute();
    
    int n;
    cin >> n;

    long long x;
    while (n--) {
        cin >> x;
        solve(x);
    }


    return 0;
}