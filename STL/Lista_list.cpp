#include <iostream>
#include <list> // Template para listas
using namespace std;

void imprimeLista(list<string> l)
{
    list<string>::iterator it; //ponteiro para me ajudar a percorrer a lista
    
    if(l.empty())
        cout << "Lista vazia. Nada a ser impresso!\n";
    else{
        for(it = l.begin(); it != l.end(); ++it)
        {
            cout << *it << endl;
        }
    }
}

int retornaPos(string nome, list<string> l ) // retornar a posicao de um valor na lista
{
   list<string>::iterator it; //ponteiro para me ajudar a percorrer a lista

  int pos = 0;
  int cont = 0;

   for(it = l.begin(); it!= l.end(); it++) // Passa por todos os registros
   {
  
     if(nome == *it)
     {
        pos = cont;
     }
    cont++;
   }

  return pos;

}
int main()
{
    //Criação de uma lista
    
    list<string> nomes; // estrutura<tipoDeDado> nome
    
    list<string> alunos = {"Eduarda", "Johann", "Bruna"}; // iniciei a lista com 3 valores
    
/*
Eduarda, Johann, Bruna.
Reverse() = Bruna, Johann, Eduarda

Sort() = Bruna, Eduarda, Johan

*/



    alunos.pop_front();
    
    alunos.push_back("Victor"); //insere no final da lista
    alunos.push_front("Vini"); // insere no inicio da lista
    
    alunos.sort(); // Organiza os dados em ordem alfabética / crescente
    
    list<string>::iterator it = alunos.begin();
    
    advance(it, 2); // movimenta o iterador na lista por X posicoes
    alunos.insert(it, "Maria");
    
    advance(it, 1);
    alunos.insert(it, "Jennifer");
    
    it = alunos.begin();
    advance(it, 2);
    alunos.erase(it);
    
    
    cout << "Quantidade de nomes: " << nomes.size() << endl;
    imprimeLista(nomes);
    
    cout << "Qunatidade de alunos:" << alunos.size() << endl;
    imprimeLista(alunos);
    

    //Remover Por nome

   int p = retornaPos("Jennifer", alunos); // Descubro a posicao do valor
   it = alunos.begin(); // me posiciono no começo da lista
   advance(it, p); // desloco o iterador até a posicao do valor que vou remover
   alunos.erase(it); // removo aquela posicao

  //ou simplesmente uso o metodo remove
   alunos.remove("Johann");

    alunos.reverse();
    cout << "Qunatidade de alunos:" << alunos.size() << endl;
    imprimeLista(alunos);
    


    alunos.clear();
    cout << "Qunatidade de alunos:" << alunos.size() << endl;
    imprimeLista(alunos);
    
    
    /*Exercicio -> Finalizar o exercicio e entregar o CPP no Blackboard
    
     Criar um menu para:
     - Imprimir Lista (ordem original, imprimir ordenado, imprimir na ordem inversa)
     - Adicionar valor no inicio, final ou após determinado valor referencia (Por exemplo: adicionar Carla, após Johann)
     - Adicionar por posicao (Ex: Adicionar Alberto na posição 5)
     - Remover: Inicio, Final ou por nome especifico (ex: Remover Vini)
     - Remover por posição (ex: Remover quem está na posição 3)
    */
    
    return 0;
}
