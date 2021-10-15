#include <iostream>
#include <list> //Template de Lista
using namespace std;

void imprimeLista(list<string> l)
{
    //Iterador para percorrer a lista
    list<string>::iterator it; // ponteiro para me ajudar a iterar a lista
    
    //it = l.begin(); //posicionando o iterador no inicio da lista
    
    for(it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl; //Imprime o dado que esta no local apontado pelo ponteiro it
    }
    
    
    
}

int main()
{
    //list<string> nomes; // estrutura <tipoDeDado> nome
    
    list<string> nomes = {"Rafael", "Victor", "Niccolas"}; // Declarando e populando uma lista
    nomes.pop_front();
    
    nomes.push_back("Bruno");
    nomes.push_front("Eduardo");
    
    list<string>::iterator it = nomes.begin();
    
    advance(it, 3);
    nomes.insert(it, "Miguel");
    
    it = nomes.begin();// Volto a posicao do ponteiro pro inicio
    advance(it,-2); // Avanço pra onde eu quero (nesse caso, voltei duas casas a partir do inicio)
    nomes.insert(it, "Vini");
    
    it = nomes.begin();// Volto a posicao do ponteiro pro inicio
    advance(it,2); //posiciono onde quero
    nomes.erase(it); //apago o registro
    
    cout << "Tamanho da Lista: " << nomes.size() << endl;
    imprimeLista(nomes);
    
    
    cout << "\n\n LISTA INVERTIDA: \n";
    nomes.reverse();
    imprimeLista(nomes);
    
    
    cout << "\n\nLISTA ORDENADA: \n";
    nomes.sort();
    imprimeLista(nomes);
    
    cout << "\n\n ORDEM DECRESCEENTE: \n";
    nomes.sort(); // Primeiro ordena
    nomes.reverse(); // Depois inverte
    imprimeLista(nomes);
    
    nomes.clear(); // Zerar a lista
    cout << "\nLista apagada. Tamanho da lista: " << nomes.size() << endl;
    
    
    /*Exercicio:
     Criar um menu para:
     - Imprimir Lista (ordem original, imprimir ordenado, imprimir na ordem inversa, imprimir ordenado decrescente) [NAO MUDA A ORDEM, apenas VISUAL]
     - Inverter a lista (muda a posição)
     - Ordenar -> Crescente ou decrescente (muda a posição)
     - Adicionar valor no inicio, final ou após determinado valor referencia (Por exemplo: adicionar Carla, após Johann)
     - Adicionar por posicao (Ex: Adicionar Alberto na posição 5)
     - Remover: Inicio, Final ou por nome especifico (ex: Remover Vini)
     - Remover por posição (ex: Remover quem está na posição 3)
     - Apagar lista (apaga a lista inteira)
    */
    
    return 0;
}
