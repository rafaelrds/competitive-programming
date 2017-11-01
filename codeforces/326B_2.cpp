#include <math.h>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

bool isLovely(long long n) {
    for (long long i = 2; i*i <= n; i++)
        if (n % (i*i) == 0)
            return false;
    return true;
}

void solve(long long n)
{
    // Vector to store half of the divisors
    vector<long long> va;
    vector<long long> vb;
    for (long long i=1; i<=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n/i == i) { // check if divisors are equal
                va.push_back(i);
            } 
            else
            {
                va.push_back(i);
                vb.push_back(n/i);
            }
        }
    }
    
    for (int i = 0; i < vb.size(); i++)
        if (isLovely(vb[i])) {
            cout << vb[i] << endl;
            return;
        }
 
    for (int i = va.size() - 1; i >= 0; i--)
        if (isLovely(va[i])) {
            cout << va[i] << endl;
            return;
        }
}

int main() {
    long long n;
    cin >> n;

    // cout << isLovely(6) << endl;
    solve(n);


    return 0;
}