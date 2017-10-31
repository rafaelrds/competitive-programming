#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int ans = 1;
    for (int j = 1; j <= min(a, b); j++)
    	ans *= j;
    
    cout << ans << endl;

    return 0;
}