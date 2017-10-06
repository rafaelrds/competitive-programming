#include <iostream>
#include <map>
#include <string>

using namespace std;

// exactly one "cakewalk";
// exactly one "simple";
// exactly one "easy";
// one "easy-medium" or one "medium";
// one "medium-hard" or one "hard".
int main () {
	map<string, int> myMap;
	int T, N;
	string s;

	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> s;
			myMap[s]++;
		}
		(myMap["cakewalk"] && myMap["simple"] && myMap["easy"] && (myMap["easy-medium"] || myMap["medium"])
				&& (myMap["medium-hard"] || myMap["hard"]))
		?	cout << "Yes" << endl
		:	cout << "No" << endl;
		myMap.clear();
	}
	return 0;
}
