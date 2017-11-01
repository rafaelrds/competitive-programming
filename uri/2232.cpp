#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += (int) pow(2, i);
        
        cout << ans << endl;
    }

    return 0;
}