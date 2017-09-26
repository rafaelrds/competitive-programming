#include <iostream>

using namespace std;

int main () {
  int a, b, tmp;
  cin >> a >> b;
  if (b < a) {
    tmp = b;
    b = a;
    a = tmp;
  }

  for (int i = a+1; i < b; i++) {
    if (i % 5 == 2 || i % 5 == 3)
      cout << i << endl;
  }

  return 0;
}
