#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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
    int n, t;
    cin >> n >> t;
    int books[n];
    int sum_arr[n];
    for (int i = 0; i < n; i++) {
        cin >> books[i];
        if (n == 0)
            sum_arr[i] = books[i];
        else
            sum_arr[i] = books[i] + sum_arr[i - 1];
    }

    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        int j = binary_search(sum_arr, n, t + sum_arr[i] - books[i]);
        ans = max(ans, j - i + 1);
    }
    cout << ans << endl;

    return 0;
}