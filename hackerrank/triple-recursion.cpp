#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                matrix[i][j] = m;
            else if (i == j)
                matrix[i][j] = matrix[i - 1][j - 1] + k;
            else if (i < j)
                matrix[i][j] = matrix[i][j - 1] - 1;
            else // (i > j)
                matrix[i][j] = matrix[i - 1][j] - 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << endl;
    } 


    return 0;
}