#include <iostream>
using namespace std;

int soma (int a, int b)
{
    return (a+b);
}

int somaRef(int &a, int &b)
{
    return (a+b);
}

void troca2( int &v1, int &v2)
{
    int aux  = v1;
    v1 = v2;
    v2 = aux;
}

int main() {
    int vida = 100;
    int *pVida; // variaveis do tipo ponteiro são identificadas pelo asterisco
    
    pVida = 0; // Inicializado como nulo. Não aponta para lugar nenhum
    
    //dizer para onde o ponteiro aponta
    // variaveis ponteiros armazenam o endereço de outra variavel
    pVida = &vida;
    
    string nome = "Vini";
    
    cout << vida << endl; // valor armazenado na variavel
    cout << & vida << endl; // endereço de memória da variável
    
    // A variável nome, guarda o dado "Vini"que é do tipo string no endereço de memória 0x7ffeefbff460
    cout << nome << endl;
    cout << &nome << endl;
    
    
    cout << "Dado armazenado na variavel Vida: " << vida << endl;
    cout << "End de memoria da variavel vida: " << &vida << endl;
    cout << "Dado armazenado na variavel pVida: " << pVida << endl;
    cout << "End de memoria da variavel pVida: " << &pVida << endl;
    cout << "O dado que esta sendo apontado pelo ponteiro pVida: " << *pVida << endl;
    
    int v1 = 2;
    int v2 = 5;
    int v3 = 8;
    int v4 = 77;
    
    cout << soma(v1, v2) << endl;
    
    cout << somaRef(v3, v4) << endl;
    
    troca2(v2, v4);
    cout << "V2: " << v2 << endl << "V4: " << v4 << endl;
    
    return 0;
}
