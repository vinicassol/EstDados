#include "Lista.h"

int main() {

  Nodo *brn, *rfl, *ncl, *vic, *vnc; //Declaração dos nodos

  brn = new Nodo; //Alocação de memória
  rfl = new Nodo;
  ncl = new Nodo;
  vic = new Nodo;
  vnc = new Nodo;

  brn->nome = "Bruno Bernardes"; // Definição de dados
  rfl->nome = "Rafael Ahrons";
  ncl->nome = "Nicollas Sihe";
  vic->nome = "Victor Bernardes";
  vnc->nome = "Vini Cassol";

  Lista alunos;

  alunos.push_back(brn);
  alunos.push_back(rfl);
  alunos.push_back(ncl);
  alunos.push_front(vic);


  alunos.pop_back();
  
  cout << "Tamanho da Lista: " << alunos.size() << endl;
  cout << "Primeiro da Lista: " <<  alunos.front()->nome <<endl;
  cout << "Ultimo da Lista: " << alunos.back()->nome << endl;

  cout << "\n\nImpressão da Lista: \n";
  alunos.imprime_lista();

} 