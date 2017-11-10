#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string s;
    stack<char> st;

    while (cin >> s) {
        bool flag = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') st.push(s[i]);
            else if (s[i] == ')') {
                if (st.empty()) {
                    flag = false;
                    break;
                }
                else st.pop();
            }
        }
        if (st.empty() && flag)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
        while (!st.empty()) st.pop();
    }

    return 0;
}