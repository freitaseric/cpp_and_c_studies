#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Contact {
  int id;
  string name;
  int country_code;
  int area_code;
  long number;
};

vector<Contact> contacts = {};

void show_agenda() {
  cout << "Agenda Telefônica" << endl << endl;
  if (contacts.size() == 0) {
    cout << "Você não tem contatos na agenda" << endl;
  } else {
    for (Contact contact : contacts) {
      cout << contact.id << ". " << contact.name << " - +"
           << contact.country_code << " (" << contact.area_code << ") "
           << contact.number << endl;
    }
  }
}

void add_contact() {
  int id;
  string name;
  int country_code;
  int area_code;
  long number;
  string confirm;

  cout << "Qual o nome do contato? ";
  cin >> name;

  cout << "Qual o código do país? ";
  cin >> country_code;

  cout << "Qual o código de área? ";
  cin >> area_code;

  cout << "Qual o número do telefone? ";
  cin >> number;

  cout << "Preview: " << name << " - +" << country_code << " (" << area_code
       << ") " << number << endl;
  cout << "Deseja confirmar? (y/n) ";
  cin >> confirm;

  if (confirm == "y") {
    int size = contacts.size();
    contacts.resize(size + 1);
    contacts.push_back({size + 1, name, country_code, area_code, number});
    cout << "Contato adicionado com sucesso, voltando ao menu!";
  } else {
    cout << "Ok, voltando ao menu!" << endl;
  }
}

void show_menu() {
  cout << "Agenda Telefônica" << endl << endl;
  cout << "O que você deseja fazer?" << endl;
  cout << "1. Adicionar contato" << endl;
  cout << "2. Remover contato" << endl;
  cout << "3. Visualizar agenda" << endl;
  cout << "4. Fechar programa" << endl;
  cout << "> ";
}

int main() {
  int action;

  while (true) {
    show_menu();
    cin >> action;

    switch (action) {
    case 1:
      add_contact();
      break;

    case 2:
      break;

    case 3:
      break;

    case 4:
      cout << "Você escolheu sair!" << endl;
      return 0;

    default:
      cout << "Não identifiquei o que você deseja fazer. Tente novamente!"
           << endl;
    }
  }

  return 0;
}
