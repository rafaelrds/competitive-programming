#include <iostream>
#include <cstdio>

using namespace std;

void swap(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main() {
  int N[20];
  for (size_t i = 0; i < 20; i++) {
    cin >> N[i];
  }

  for (int i = 0; i < 10; i++) {
    swap(N[i], N[19-i]);
  }

  for (size_t i = 0; i < 20; i++) {
    printf("N[%zd] = %d\n", i, N[i]);
  }

  return 0;
}
