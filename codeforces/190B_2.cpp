#include <iostream>

using namespace std;

int solve(int r, int g, int b, int mix) {
    int p_mix = min(r, g);
    p_mix = min(p_mix, b);
    if (p_mix < mix) mix = p_mix;

    r -= mix;
    g -= mix;
    b -= mix;
    return mix + r/3 + g/3 + b/3;
}

int main() {
    int r,g,b;
    cin >> r >> g >> b;

    int ans = max(solve(r, g, b, 0), solve(r, g, b, 1));
    ans = max(ans, solve(r, g, b, 2));

    cout << ans << endl;
}