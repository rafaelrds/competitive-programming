#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define PI 3.14159265

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        // double tan_alfa = tan(36 * PI / 180.0);
        // a^2 x 0.25 x sqrt(5 x (5 + 2 x sqrt(5)))
        // printf("%.3f\n", (5 * N * N) / (4 * tan_alfa));
        printf("%.3f\n", N*N * 0.25 * sqrt(5 * (5 + 2 *sqrt(5))));
    }

    return 0;
}