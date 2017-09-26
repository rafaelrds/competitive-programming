#include <iostream>
#include <vector>
// #include <sstream>
#include <algorithm>

using namespace std;

typedef struct 
{
	string nome, cor, tamanho;
}   pessoa;


bool cmp(pessoa a, pessoa b)
{
	if (a.cor==b.cor)
	{
		if (a.tamanho==b.tamanho) return a.nome < b.nome;
		else return a.tamanho > b.tamanho;
	}
	return a.cor < b.cor;
}


int main()
{
	int n;
	cin >> n;
	while (n)
	{
		cin.ignore();

		vector<pessoa> ppl;
		for (int i = 0; i < n; ++i)
		{
			string cor, tamanho, nome;
			getline(cin, nome);
			cin >> cor >> tamanho;
			cin.ignore();
			// cout << nome << cor << tamanho << endl;
			pessoa p = {nome, cor, tamanho};
			ppl.push_back(p);
		}

		stable_sort(ppl.begin(), ppl.end(), cmp);
		for (int i = 0; i < ppl.size(); ++i)
			cout << ppl[i].cor << " " << ppl[i].tamanho << " " << ppl[i].nome << endl;

		cin >> n;
		if (n!=0) cout << endl;
	}



	return 0;
}