#include <iostream>

using namespace std;

int main () {
  int entrada = 0;
  int a = 0, g = 0, d = 0;
  while (entrada != 4) {
    cin >> entrada;
    if (entrada == 1)
      a++;
    else if (entrada == 2)
      g++;
    else if (entrada == 3)
      d++;
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << a << endl;
  cout << "Gasolina: " << g << endl;
  cout << "Diesel: " << d << endl;

  return 0;
}
