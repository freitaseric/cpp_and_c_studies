#include <iostream>

using namespace std;

int fact(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }

  return num * fact(num - 1);
}

int main() {
  int num;

  cout << "Bem vindo(a) a Calculadora Fatorial!" << endl;
  cout << "Digite um número e descubra qual é seu valor fatorial: ";

  cin >> num;

  cout << "Resultado: " << fact(num) << endl;

  return 0;
}
