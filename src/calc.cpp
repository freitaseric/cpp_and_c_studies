#include <iostream>

using namespace std;

void menu()
{
  cout << "Escolha uma operação:" << endl;
  cout << "1. Adição" << endl;
  cout << "2. Subtração" << endl;
  cout << "3. Multiplicação" << endl;
  cout << "4. Divisão" << endl;
  cout << "5. Sair" << endl;
  cout << "> ";
}

int main()
{
  int operacao;
  double num1, num2;

  while (true)
  {
    menu();
    cin >> operacao;

    if (cin.fail() || operacao <= 0 || operacao > 5)
    {
      cin.clear();
      cout << "Escolha inválida. Tente novamente!" << endl;
      continue;
    }

    if (operacao == 5)
    {
      cout << "Você escolheu sair." << endl;
      break;
    }

    cout << "Digite o primeiro número: ";
    cin >> num1;
    if (cin.fail())
    {
      cin.clear();
      cout << "Entrada inválida. Tente novamente!" << endl;
      continue;
    }

    cout << "Digite o segundo número: ";
    cin >> num2;
    if (cin.fail())
    {
      cin.clear();
      cout << "Entrada inválida. Tente novamente!" << endl;
      continue;
    }

    switch (operacao)
    {
    case 1:
      cout << "Resultado: " << num1 + num2 << endl;
      break;
    case 2:
      cout << "Resultado: " << num1 - num2 << endl;
      break;
    case 3:
      cout << "Resultado: " << num1 * num2 << endl;
      break;
    case 4:
      if (num2 != 0)
      {
        cout << "Resultado: " << num1 / num2 << endl;
      }
      else
      {
        cout << "Erro: Divisão por zero." << endl;
      }
      break;
    }
  }

  return 0;
}
