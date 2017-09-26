#include <iostream>

using namespace std;

int main () {
  int a, n, sa = 0;
  cin >> a >> n;
  while (n <= 0)
    cin >> n;

  while (n) {
    sa += a;
    a++;
    n--;
  }
  cout << sa << endl;
  
  return 0;
}
