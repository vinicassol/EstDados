#include <iostream>
#include <stack> //Empilhar Dados (operações no topo)
#include <queue> //Enfileirar Dados (insere no final da fila e remove no inicio da fila)
#include <time.h> //para rand em função do tempo
using namespace std;


/* EXERCICIO:
     -> Alterar o programa da vacina para incluir um menu onde o usuario possa:
     1. Adicionar pessoa na fila, informando o nome, o cpf e qual vacina esta disponivel pra ela (neste momento o sistema sorteia qual vacina aplicada: Coronavac, Astrazeneca, Pfizer, Janssen);
     2. Aplicar vacina.
     3. Status: Informar quantas pessoas estão aguardando e quantas já foram vacinadas;
     4. Sair: Informar o total de vacinados. Porém o programa não pode finalizar se houverem pessoas na fila aguardando.
*/


struct Pessoa
{
    string nome;
    string cpf;
    string vacina;
};

string sorteiaVacina()
{
    int vacina = rand()%4; // vai sortear entre zero e três
    string marca;
    
    switch (vacina)
    {
        case 0:
            marca = "Coronavac";
            break;
        case 1:
            marca = "Janssen";
            break;
        case 2:
            marca = "Astrazeneca";
            break;
        case 3:
            marca = "Pfizer";
            break;
    }
    return marca;
}

int main()
{
    srand(time(0));
    int op;
    int contaVacinados = 0;
    bool terminou = false;
    queue <Pessoa> filaVacina;

    do{
        cout << "1 - Add pessoa\n";
        cout << "2 - Aplicar vacina\n";
        cout << "3 - Status\n";
        cout << "4 - Sair\n";
        cin >> op;
        
        Pessoa aux;
        
        switch (op) {
            case 1:
                cout << "Informe seu nome: ";
                cin >> aux.nome;
                cout << "Informe o CPF: ";
                cin >> aux.cpf;
                aux.vacina = sorteiaVacina();
                filaVacina.push(aux);
                break;
            case 2:
                if(filaVacina.empty())
                    cout << "Nao tem ninguem na fila \n";
                else{
                    cout << "Aplicando vacina " << filaVacina.front().vacina << " em " << filaVacina.front().nome << endl;
                    filaVacina.pop();
                    contaVacinados++;
                }
              
                break;
            case 3:
                cout << "Vacinados ateh o momento: " << contaVacinados << endl;
                cout << "Pessoas aguardando para vacina: " << filaVacina.size() << endl;
                break;
            case 4:
                cout << "Total de Vacinados no dia: " << contaVacinados << endl;
                if(filaVacina.empty())
                    terminou = true;
                else{
                    terminou = false;
                    cout << "Ainda não podemos encerrar pois existem pessoas agurdando na fila\n";
                }
            default:
                break;
        }

    }while(op!=4 || !terminou);
    return 0;
}
