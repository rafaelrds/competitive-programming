#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  double a[100];
  for (size_t i = 0; i < 100; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < 100; i++) {
    if (a[i] <= 10.0) {
      printf("A[%zd] = %.1lf\n", i, a[i]);
    }
  }

  return 0;
}
