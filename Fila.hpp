//
//  Fila.hpp
//  EstDados
//
//  Created by Vini Cassol on 22/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//


#ifndef Fila_hpp
#define Fila_hpp

#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    string nome;
    string matricula;
};

struct Nodo{
    Aluno alu;
    Nodo *proximo;
};

class Fila
{
public:
    Fila();
    void push(Nodo *novoItem);
    void pop();
    bool empty();
    int  size();
    void debug();
    void print();
    
private:
    Nodo *primeiro;
    Nodo *ultimo;
    int s; // size
};

#endif /* Fila_hpp */
