#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    int sereja = 0, dima = 0;
    int leftmost = 0, rightmost = n - 1;
    bool sereja_plays = true;
    while (leftmost <= rightmost) {
        if (sereja_plays) {
            if (cards[leftmost] > cards[rightmost]) {
                sereja += cards[leftmost];
                leftmost++;
            } else {
                sereja += cards[rightmost];
                rightmost--;
            }
        }
        else {
            if (cards[leftmost] > cards[rightmost]) {
                dima += cards[leftmost];
                leftmost++;
            } else {
                dima += cards[rightmost];
                rightmost--;
            }
        }
        sereja_plays = !sereja_plays;
    }
    cout << sereja << " " << dima << endl;

    return 0;
}