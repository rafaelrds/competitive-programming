#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int vi;
  cin >> vi;
  int n = 10;
  for (size_t i = 0; i < 10; i++) {
    printf("N[%zd] = %d\n", i, vi);
    vi *= 2;
  }

  return 0;
}
