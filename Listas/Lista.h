#include <iostream>
using namespace std;

struct Nodo
{
  string nome;
  Nodo *proximo;
  Nodo *anterior;
};

class Lista
{
public:
  Lista();
  bool empty();
  int size();
  void push_back(Nodo *novo);
  void push_front(Nodo *novo);
//  void push_index(int i, Nodo *novo); //add uma posicao

  void pop_front();
  void pop_back();
 // void pop_index(int i); //remove uma posicao

  Nodo *back();
  Nodo * front();

  void imprime_lista();

private:
  Nodo *primeiro;
  Nodo *ultimo;

  int _size; //tamanho da lista

};