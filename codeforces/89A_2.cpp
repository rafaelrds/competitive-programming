#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	string vowels = "aoyeui";
	string ans = "";

	for (size_t i = 0; i < s.size(); i++) {
		size_t found = vowels.find(tolower(s[i]));

		if (found == string::npos) { // s[i] is a consonant
			ans += ".";
			ans += tolower(s[i]);
		}
	}
	cout << ans << endl;

	return 0;
}
