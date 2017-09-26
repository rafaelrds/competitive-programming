#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int x[10];
  for (size_t i = 0; i < 10; i++) {
    cin >> x[i];
  }
  for (size_t i = 0; i < 10; i++) {
    if (x[i] <= 0) {
      x[i] = 1;
    }
    printf("X[%zd] = %d\n", i, x[i]);
  }

  return 0;
}
