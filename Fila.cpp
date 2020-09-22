//
//  Fila.cpp
//  EstDados
//
//  Created by Vini Cassol on 22/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Fila.hpp"

Fila::Fila()
{
    // Ao criar uma fila, o tamanho é zero e ela esta vazia, por isso, primeiro e ultimo nodo não apontam para ninguém
    s = 0;
    primeiro = 0;
    ultimo = 0;
}

bool Fila::empty()
{
    if (s > 0)
        return false;
    else
        return true;
}

void Fila::push(Nodo *novoItem)
{
    if(empty())
    {
        primeiro = novoItem;
        ultimo = novoItem;
    }
    else
    {
        ultimo->proximo = novoItem;
        ultimo = novoItem;
    }
    s++;
}

void Fila::debug()
{
    cout << "Tamanho da Fila: " << s << endl;
    cout << "Primeiro da Fila: " << primeiro->alu.nome << endl;
    cout << "Ultimo da Fila: " << ultimo->alu.nome << endl;
}
