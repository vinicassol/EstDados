#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main() {

  //queue<string> pacientes;
  deque<string>pacientes;

  //Um iterator é um ponteiro que permite permcorrer a estrutura
  deque<string>::iterator it ;

  pacientes.push_back("Bruno");
  pacientes.push_back("Eduardo");
  pacientes.push_front("Miguel");
  pacientes.push_back("Nicollas");
  pacientes.push_back("Rafael");

  cout << pacientes.size() << " pacientes aguardando\n";
  cout << "Primeiro da fila: " << pacientes.front() << endl;
  cout << "Ultimo da fila: " << pacientes.back() << endl;


  //posicionar o iterador no inicio da estrutura
  it = pacientes.begin();
  cout << "\n\n Lista de pacientes: \n";
  while(it != pacientes.end())
  {
    cout << *it++ << endl;
  }
}
