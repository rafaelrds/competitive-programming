#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int x = 0;
    string line;
    for (int i = 0 ; i < n; i++) {
        cin >> line;
        if (line[0] == '+' or line[2] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;


    return 0;
}