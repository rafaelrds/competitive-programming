#include <iostream>
#include <string>
#include <stdio.h>
#include <set>
#include <ctype.h>

using namespace std;

int main() {
    set<char> alphabet;

    for (char c = 'a'; c <= 'z'; c++)
        alphabet.insert(c);
    
    int n;
    cin >> n;
    char word[n];
    scanf("%s", word);

    for (int i = 0; i < n; i++)
        alphabet.erase(tolower(word[i]));
    
    if (alphabet.size() == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}