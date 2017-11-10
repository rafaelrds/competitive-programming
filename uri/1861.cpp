#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
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
		if (dead.find(it->first) == dead.end())
			cout << it->first << " " << it->second << endl;
	}
	return 0;
}