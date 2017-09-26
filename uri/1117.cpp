#include <iostream>

using namespace std;

int main () {
	int n = 0;
	double nota, snota;
	while (n < 2) {
		cin >> nota;
		if (0.0 <= nota && nota <= 10.0) {
			snota += nota;
			n++;
		}
		else 
			cout << "nota invalida" << endl;
	}
	cout << "media = " << snota/2.0 << endl;


	return 0;
}