//
//  Pilha.hpp
//  EstDados
//
//  Created by Vini Cassol on 06/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//
#ifndef Pilha_hpp
#define Pilha_hpp

#include <iostream>
using namespace std;



struct Nodo
{
    string elemento;
    Nodo *proximo;
};

class Pilha
{
public:
    Pilha();
    void Push(Nodo *novo);
    void Pop();
    Nodo * Top();
    bool Empty();
    int Size();
    
private:
    int tamanho;
    Nodo *topo;
};








#endif /* Pilha_hpp */
