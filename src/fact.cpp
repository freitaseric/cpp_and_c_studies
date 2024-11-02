#include <iostream>

using namespace std;

int fact(int num)
{
  if (num < 0)
  {
    return -1; // Erro para números negativos
  }
  if (num == 0 || num == 1)
  {
    return 1;
  }
  return num * fact(num - 1);
}

int main()
{
  int num;

  cout << "Bem vindo(a) à Calculadora Fatorial!" << endl;
  cout << "Digite um número não negativo e descubra qual é seu valor fatorial: ";

  cin >> num;

  if (cin.fail() || num < 0)
  {
    cout << "Entrada inválida. Por favor, insira um número inteiro não negativo." << endl;
  }
  else
  {
    int resultado = fact(num);
    if (resultado == -1)
    {
      cout << "Erro: Não é possível calcular o fatorial de um número negativo." << endl;
    }
    else
    {
      cout << "Resultado: " << resultado << endl;
    }
  }

  return 0;
}
