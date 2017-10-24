#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int* A, int n, int target) {
    int low = 0, hi = n - 1;
    while (low <= hi) {
        int mid = low + (hi - low) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            low = mid + 1;
        else
            hi = mid - 1;
    }
    return min(low, hi);
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a + n);

    for (int i = 0; i < m; i++) {
        int j = binary_search(a, n, b[i]);
        while (a[j] == a[j + 1]) j++;
        
        cout << j + 1;
        if (i != m - 1) cout << " ";
    }
    cout << endl;

    return 0;
}