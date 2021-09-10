#include <iostream>
#include <stack> //Empilhar Dados (operações no topo)
#include <queue> //Enfileirar Dados (insere no final da fila e remove no inicio da fila)
using namespace std;

int main()
{
  /*  stack<string> minhaPilha;
    queue<string> minhaFila;
    
    // Inserção
    minhaPilha.push("Dados"); // insere no topo
    minhaFila.push("Dados"); // insere no fim da fila
    
    //Remoção
    minhaPilha.pop(); //Remove o topo
    minhaFila.pop(); // Remove do inicio
    
    //Consulta
    minhaPilha.top(); // Consulta a partir do topo
    minhaFila.front(); // Consulta o primeiro da fila
    
    //Tamanho
    minhaPilha.size();
    minhaFila.size();
    
    // Verificar se a estrutura esta vazia
    minhaPilha.empty();
    minhaFila.empty();
    */
    
    // ###########################
    
    queue <string> vacina;
    vacina.push("Bruno");
    vacina.push("Miguel");
    vacina.push("Nicollas");
    vacina.push("Rafael");
    vacina.push("Victor");
    
    if(vacina.empty())
        cout << "Fila vazia\n";
    else
    {
        while(!vacina.empty())
        {
            cout << "Pessoas na fila: " << vacina.size() << endl;
            cout << "Vacinado: " << vacina.front() << ". ";
            vacina.pop();
            cout << "Proximo a vacinar: " << vacina.front() << endl;
        }
    }
    
    /* EXERCICIO:
         -> Alterar o programa da vacina para incluir um menu onde o usuario possa:
         1. Adicionar pessoa na fila, informando o nome, o cpf e qual vacina esta disponivel pra ela (neste momento o sistema sorteia qual vacina aplicada: Coronavac, Astrazeneca, Pfizer, Janssen);
         2. Aplicar vacina.
         3. Status: Informar quantas pessoas estão aguardando e quantas já foram vacinadas;
         4. Sair: Informar o total de vacinados. Porém o programa não pode finalizar se houverem pessoas na fila aguardando.
         */
    
    return 0;
}
