#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<char> mensagem;
	string s;
	while (!cin.eof() and cin >> s)
	{
		list<char>::iterator it;
		it = mensagem.begin();

		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='[') it = mensagem.begin();
			else if (s[i]==']') it = mensagem.end();
			else mensagem.insert(it, s[i]);
		}

		for (it = mensagem.begin(); it != mensagem.end(); it++)
		{
			cout << *it;
		}
		cout << endl;
		mensagem.clear();
	}
	return 0;
}