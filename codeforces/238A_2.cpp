#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boxes;
    int col;
    for (int i = 0; i < n; i++) {
        cin >> col;
        boxes.push_back(col);
    }

    sort(boxes.begin(), boxes.end());
    for (int i = 0; i < n; i++) {
        cout << boxes[i];
        if (i != n-1) cout << " ";
    }
    cout << endl;
    

    return 0;
}