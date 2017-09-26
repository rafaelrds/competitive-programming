#include <iostream>
#include <cstdio>

using namespace std;

int main () {
  int n, i = 1;
  cin >> n;
  while (n--) {
    printf("%d %d %d\n", i, i*i, i*i*i);
    i++;
  }

  return 0;
}
