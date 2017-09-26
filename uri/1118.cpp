#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	int n = 0;
	double nota, snota;
	int flag;

	while (flag != 2) {
		// program
		while (n < 2) {
			cin >> nota;
			if (0.0 <= nota && nota <= 10.0) {
				snota += nota;
				n++;
			}
			else 
				cout << "nota invalida" << endl;
		}
		printf("media = %.2f\n", snota/2.0);
		flag = 0;
		
		while (flag != 1 && flag != 2) {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> flag;
			if (flag == 2)
				break;
			else if (flag == 1) {
				n = 0;
				snota = 0;
				break;
			}
			else continue;
		}

	}
	


	return 0;
}