#include <iostream>
using namespace std;

//TIPO DE DADO ABSTRATO

struct Dinossauro // Tipo de dado Dinossauro, agrupando varias informações
{
    //Qualquer dinossauro possui estas infos:
    string id;
    string nome;
    string alimento;
    bool superTrunfo;
    float altura;
    float comprimento;
    int peso;
    int viveuHa;
};


int main()
{
    Dinossauro d1; //Criei uma variavel do meu TAD (Dinossauro)
    d1.id = "1A";
    d1.nome = "Herrerassauro";
    d1.alimento = "Carnivoro";
    d1.superTrunfo = false;
    d1.altura = 1.5;
    d1.comprimento = 4.5;
    d1.peso = 300;
    d1.viveuHa = 231;
    
    cout << d1.id << " - " << d1. nome << " - " << d1.superTrunfo << " - " << d1.altura << " - " << d1.comprimento << " - " << d1.peso << " - " << d1.viveuHa << " - " << d1.alimento << endl;
    
    
    Dinossauro *d2;
    d2 = new Dinossauro; // aloco memoria e aponto pra ela
    
    d2->id = "1B";
    d2->nome = "Procompsognato";
    d2->alimento = "Carnivoro";
    d2->superTrunfo = false;
    d2->altura = 0.3;
    d2->comprimento = 1.2;
    d2->peso = 1;
    d2->viveuHa = 222;
    
    cout << d2->id << " - " << d2->nome << " - " << d2->superTrunfo << " - " << d2->altura << " - " << d2->comprimento << " - " << d2->peso << " - " << d2->viveuHa << " - " << d2->alimento << endl;
    
    
    // Alocar vetor de 32 cartas para o supertrunfo usando ponteiros
    
    Dinossauro *myPets[32];
    
    for(int i=0; i< 32; i++)
    {
        myPets[i] = new Dinossauro;
    }
    
    myPets[0]->id = "1A";
    myPets[0]->nome = "Herrerassauro";
    myPets[1]->id = "1B";
    myPets[1]->nome = "Procompsognato";
    
    cout << "\n\nVetor de Dinos:\n";
    
    for(int i=0; i<2; i++)
    {
        cout << myPets[i]->id << " - " << myPets[i]->nome << endl;
    }
    
    //TAREFA
    /* Criar seu baralho do super trunfo com 32 cartas
     - Escolher o contexto (pokemon, carro, outros.....)
     - Criar o vetor de cartas
     - Criar uma função que embaralhe as cartas do vetor
     - mostrar o baralho embaralhado
     
     
     */
    
    return 0;
}
    
