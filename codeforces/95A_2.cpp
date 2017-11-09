#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

void changeCase(string& s) {
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
}

bool isCaps(string s) {
    for (int i = 1; i < s.size(); i++)
        if (islower(s[i]))
            return false;
    return true;
}

void solve(string& s) {
    if (isCaps(s))
        changeCase(s);
}   

int main() {
    string s;
    cin >> s;

    solve(s);
    cout << s << endl;

    return 0;
}