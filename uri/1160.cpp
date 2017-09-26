#include <iostream>

using namespace std;

int main () {
  int testes;
  cin >> testes;
  while (testes--) {
    int pa, pb;
    double ga, gb;
    cin >> pa >> pb >> ga >> gb;
    int anos = 0;

    while (pa < pb) {
      pa += int(pa * ga/100);

      pb += int(pb * gb/100);
      anos++;
    }
    (anos <= 100 ) ? cout << anos << " anos." << endl : cout << "Mais de um 1 seculo." << endl;

  }


  return 0;
}
