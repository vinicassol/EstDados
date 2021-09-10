#include <iostream>
#include <queue> // Biblioteca para Filas
using namespace std;

//Nas filas, os dados são inseridos no final e removidos a partir do inicio (dados enfileirados)
int main()
{
    //Fila de string chamada vacina. Vai organizar a fila de pessoas aguardando a vacina
    queue<string> vacina;
    
    vacina.push("Johann");
    vacina.push("Eduarda");
    vacina.push("Victor");
    vacina.push("Bruna");
    
    if(vacina.empty()) // Verifica se estrutura estah vazia
        cout << "Nao ha ninguem aguardando\n";
    else
    {
        cout << "Pessoas na fila: " << vacina.size() << endl;
        cout << "Primeiro da fila: " << vacina.front() << endl;
        while(!vacina.empty()) //Enquanto a fila não estiver vazia
        {
            cout << "Vacina aplicada em " << vacina.front() << ". ";
            vacina.pop(); // remove da fila
            cout << "Proximo a ser vacinado: " << vacina.front() << endl;
        }
    }
    /* EXERCICIO:
     -> Alterar o programa da vacina para incluir um menu onde o usuario possa:
     1. Adicionar pessoa na fila, informando o nome, o cpf e qual vacina esta disponivel pra ela (neste momento o sistema sorteia qual vacina aplicada: Coronavac, Astrazeneca, Pfizer, Janssen);
     2. Aplicar vacina.
     3. Status: Informar quantas pessoas estão aguardando e quantas já foram vacinadas;
     4. Sair: Informar o total de vacinados. Porém o programa não pode finalizar se houverem pessoas na fila aguardando.
     */
}
