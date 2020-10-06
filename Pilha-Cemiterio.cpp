//
//  main_PilhaElementos.cpp
//  EstDados
//
//  Created by Vini Cassol on 06/10/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Pilha.hpp"

int main()
{
    Pilha p;
    
    Nodo *c, *l, *t, *f;
    
    f = new Nodo;
    c = new Nodo;
    l = new Nodo;
    t = new Nodo;
    
    f->elemento = "Flor";
    c->elemento = "Caixao";
    l->elemento = "Lapide";
    t->elemento = "Terra";
    
    p.Push(c);
    p.Push(t);
    p.Push(l);
    p.Push(f);
    
    cout << p.Size() << " Elementos na pilha. \n";
    
    cout << "==== Exumacao!====\n";
    
    while (!p.Empty())
    {
        cout << p.Top()->elemento << " estah no topo\n";
        cout << "Remover: " << p.Top()->elemento << endl;
        p.Pop();
    }
    return 0;
}
