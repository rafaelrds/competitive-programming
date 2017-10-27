#include <iostream>

using namespace std;

int solve(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i*i;
    return ans;
}

int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        cout << solve(n) << endl;
    }
    return 0;
}