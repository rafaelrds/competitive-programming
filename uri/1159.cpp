#include <iostream>

using namespace std;

int main () {
  int n, s, i;

  while (true) {
    cin >> n;
    if (n == 0) break;

    s = 0, i = 0;
    while (i < 5) {
      if (n % 2 == 0) {
        s += n;
        i++;
      }
      n++;
    }
    cout << s << endl;
  }

  return 0;
}
