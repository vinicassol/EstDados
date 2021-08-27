#include <iostream>
#include <stack> //para trabalhar com pilhas
using namespace std;

/*Objetivo, empilhar pizzas no bagageiro de uma moto para que sejam entregues na seguinte ordem:
 1. Portuguesa
 2. Margerita
 3. Quatro-Queijos
 4. Catupiri
*/

struct Pedido
{
    string saborPizza;
    string enderecoEntrega;
};

void stackBasica()
{
    stack<string> b;
    
    //a primeira pizza a ser colocada na pilha, será a ultima a ser entregue
    b.push("Catupiri");
    b.push("Quatro-Queijos"); // Coloquei a 4Q em cima da Catupiry
    b.push("Margerita");
    b.push("Portuguesa");
    
    cout << b.size() << " pizzas foram colocadas no bagageiro da moto para serem entregues.\n";
    
    while(!b.empty()) //Enquanto a pilha não estiver vazia, vou removendo
    {
        cout << b.top() << " foi entregue! ";
        b.pop();
        cout << " Pizzas restantes: " << b.size();
        
        if(b.size() > 0)
            cout << " Proxima entrega: " << b.top();
        
        cout << endl;
    }
}

int main() {
    
    stack<Pedido> pedidos;
    
    Pedido p1, p2, p3, p4;
    
    p1.saborPizza = "Portuguesa";
    p1.enderecoEntrega = "Av. Goethe";
    
    p2.saborPizza = "Margerita";
    p2.enderecoEntrega = " Rua Silva So";
    
    p3.saborPizza = "Quatro queijos";
    p3.enderecoEntrega = "Av. Proatasio Alves";
    
    p4.saborPizza = "Catupiry";
    p4.enderecoEntrega = "Av. Ipiranga";
    
    pedidos.push(p4);
    pedidos.push(p3);
    pedidos.push(p2);
    pedidos.push(p1);
    
    while(!pedidos.empty()) //Enquanto a pilha não estiver vazia, vou removendo
    {
        cout << pedidos.top().saborPizza << " foi entregue no endereco: " << pedidos.top().enderecoEntrega;
        pedidos.pop();
        cout << ". Pizzas restantes: " << pedidos.size();
        
        if(pedidos.size() > 0)
            cout << ". Proxima entrega: " << pedidos.top().saborPizza << " no endereco: " << pedidos.top().enderecoEntrega;
        
        cout << endl;
    }
    
    return 0;
}
