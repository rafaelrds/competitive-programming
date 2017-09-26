#include <iostream>
#include <cstdio>

using namespace std;

int main () {
  int n, i = 1;
  cin >> n;
  while (n--) {
    printf("%d %d %d PUM\n", i, i+1, i+2);
    i+=4;
  }

  return 0;
}
