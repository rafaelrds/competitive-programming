#include <deque>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int Q, N;
    cin >> Q;
    string query;
    deque<int> ada;
    bool reverse = false;

    while (Q--) {
        cin >> query;

        if (query == "back") {
            if (ada.empty()) {
                cout << "No job for Ada?" << endl;
                continue;
            }
            if (!reverse) {
                cout << ada.back() << endl;
                ada.pop_back();
            }
            else {
                cout << ada.front() << endl;
                ada.pop_front();
            }
        }
        if (query == "front") {
            if (ada.empty()) {
                cout << "No job for Ada?" << endl;
                continue;
            }
            if (!reverse) {
                cout << ada.front() << endl;
                ada.pop_front();
            }
            else {
                cout << ada.back() << endl;
                ada.pop_back();
            }
        }
        if (query == "toFront") {
            cin >> N;
            if (!reverse) ada.push_front(N);
            else ada.push_back(N);
        }
        if (query == "push_back") {
            cin >> N;
            if (!reverse) ada.push_back(N);
            else ada.push_front(N);
        }
        if (query == "reverse") {
            reverse = !reverse;
        }
        
    }

    return 0;
}