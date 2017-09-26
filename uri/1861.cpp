#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
	map<string, int> murders;
	set<string> dead;

	string murder, victim;
	while (cin >> murder >> victim)
	{
		dead.insert(victim);
		murders[murder]++;
	}

	map<string,int>::iterator it;
	cout << "HALL OF MURDERERS" << endl;
	for (it=murders.begin(); it != murders.end(); it++)
	{
		if (dead.count(it->first) == 0)
			cout << it->first << " " << it->second << endl;
	}
	return 0;
}