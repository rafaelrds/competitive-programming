#include <iostream>

using namespace std;

int main () {
	int grenais = 0;
	int gremio, inter;
	int v_gremio = 0, v_inter = 0, empates = 0;

	while (true) {
		cin >> inter >> gremio;

		grenais++;
		if (inter > gremio)
			v_inter++;
		else if (gremio > inter)
			v_gremio++;
		else
			empates++;

		int flag = 0;
		while (flag != 1 && flag != 2) {
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> flag;
		}
		if (flag == 2)
			break;
	}
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << v_inter << endl;
	cout << "Gremio:" << v_gremio << endl;
	cout << "Empates:" << empates << endl;
	if (v_inter > v_gremio)
		cout << "Inter venceu mais" << endl;
	else if (v_gremio > v_inter)
		cout << "Gremio venceu mais" << endl;
	else
		cout << "Nao houve vencedor" << endl;


	return 0;
}