//
//  main.cpp
//  EstDados
//
//  Created by Vini Cassol on 22/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Fila.hpp"

int main() {
 // Utilizar as estruturas
    Fila minhaFila;
    
    Nodo *g, *c, *m;
    
    g = new Nodo;
    c = new Nodo;
    m = new Nodo;
    
    g->alu.nome = "Giovana";
    c->alu.nome = "Carlos";
    m->alu.nome = "Matheus";
    
    minhaFila.push(g);
    minhaFila.push(c);
    minhaFila.push(m);
    
    
    minhaFila.debug();
   
    
}
