#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int n;
	cin >> n;

	int i = 1;
	while (n--) {
		printf("%d %d %d\n",i, i*i, i*i*i);
		printf("%d %d %d\n",i, i*i+1, i*i*i+1);
		i++;
	}

	return 0;
}