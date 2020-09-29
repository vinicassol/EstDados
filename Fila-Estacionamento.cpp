//
//  Fila-Estacionamento.cpp
//  EstDados
//
//  Created by Vini Cassol on 29/09/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Fila.hpp"

int main()
{
    
    Fila estacionamento;
    char op = ' ';
    string placa;
    Nodo *auxiliar;
    string placaRemover;
    bool removeu = false;
    int contador = 0;
    
    // Insere dados na fila para facilitar testes
   /* Nodo *n1, *n2, *n3, *n4, *n5, *n6, *n7;

    n1 = new Nodo;
    n2 = new Nodo;
    n3 = new Nodo;
    n4 = new Nodo;
    n5 = new Nodo;
    n6 = new Nodo;
    n7 = new Nodo;
    
    n1->placa = "123abc";
    n2->placa = "321cd";
    n3->placa = "569lk";
    n4->placa = "846kg";
    n5->placa = "359bk";
    n6->placa = "164srr";
    n7->placa = "PL4C4";

    estacionamento.push(n1);
    estacionamento.push(n2);
    estacionamento.push(n3);
    estacionamento.push(n4);
    estacionamento.push(n5);
    estacionamento.push(n6);
    estacionamento.push(n7);

    estacionamento.debug();
    */
    
    while (op != 's')
    {
        cout << "MENU\n\n";
        cout << " E - Estacionar Veiculo\n";
        cout << " R - Remover Veiculo\n";
        cout << " S - Sair\n";
        cout << "Informe a opcao desejada: ";
        cin >> op;
        
        switch (op)
        {
            case 'E':
            case 'e':
                auxiliar = new Nodo;
                cout << "Informe a placa do veiculo: ";
                cin >> auxiliar -> placa;
                estacionamento.push(auxiliar);
                
                estacionamento.debug();
                break;
                
            case 'R':
            case 'r':
              if(estacionamento.size() > 0)
              {
                    estacionamento.debug();
                    cout << "Informe a placa para remover: ";
                    cin >> placaRemover;
                    
                    contador = estacionamento.size();
                    removeu = false;
                    
                    while(!removeu)
                    {
                        contador--;
                         if(estacionamento.front()->placa == placaRemover)
                         {
                             estacionamento.pop();
                             cout << "Veiculo removido!\n";
                             removeu = true;
                         }
                         else
                         {
                             estacionamento.push(estacionamento.front());
                             estacionamento.pop();
                         }
                        
                        if(contador == 0)
                        {
                            removeu = true; // força a saida do laço
                        }
                    }
                }
                else
                {
                    cout << "Estacionamento vazio\n";
                }
                break;
            default:
                cout << "Opcao Invalida\n";
        }
    }
    return 0;
}
