#include "Lista.h"

Lista::Lista()
{
  _size = 0;
}

bool Lista::empty()
{
  if(_size==0)
    return true;
  else
    return false;
}

int Lista::size()
{
  return _size;
}

Nodo *Lista::back()
{
  return ultimo;
}

Nodo * Lista::front()
{
  return primeiro;
}

void Lista::push_back(Nodo *novo)
{
  if(empty())
  {
    primeiro = novo;
    ultimo = novo;
  }
  else // insere depois do ultimo
  {
    novo->anterior = ultimo;
    ultimo->proximo = novo;
    ultimo = novo;
  }

  _size++;
}

void Lista::push_front(Nodo *novo)
{
  if(empty())
  {
    primeiro = novo;
    ultimo = novo;
  }
  else
  { 
    novo->proximo = primeiro;
    primeiro->anterior = novo;
    primeiro = novo;
  }
  _size++;
}

void Lista::imprime_lista()
{
  Nodo * temp = primeiro;

  while(temp) // enquanto temp não for nulo
  {
    cout << temp->nome << endl;

    temp = temp->proximo;
  }
}

void Lista::pop_front()
{
  primeiro = primeiro->proximo;
  primeiro->anterior = NULL;
  
  _size--;
}

void Lista::pop_back()
{
  ultimo = ultimo->anterior;
  ultimo->proximo = NULL;
  _size--;
}
