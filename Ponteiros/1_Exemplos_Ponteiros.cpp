#include <iostream>
using namespace std;

//Passagem por valor - Copia
int soma(int a, int b)
{
    return a+b;
}
// Passagem por Referencia
int somaRef(int &a, int &b)
{
    return a+b;
}
// Passagem por ponteiros
int somaPtr(int *a, int *b)
{
    return *a+*b;
}

//Ao trabalhar com ponteiros e referencias, consigo modificar valores fora da função
int troca(int &a, int &b)
{
    int auxiliar = a;
    a = b;
    b = auxiliar;
    
    return a+b;
}

int main()
{
    string player = "Vini";
    int vida = 100;
    int saude = 80;
    int *pVida; // asterisco indica que a variavel eh do tipo ponteiro
    
    pVida = &vida;
    
    cout << "Conteudo da variavel Player: " <<  player <<endl;
    //Com o &, acessamos o endereço da variavel
    cout << "End da variavel Player: " << &player << endl;
    
    cout << "Conteudo da variavel vida: " << vida << endl;
    cout << "End da variavel vida: " << &vida << endl;
    
    cout << "Conteudo da variavel pVida: " << pVida << endl;
    cout << "End da variavel pVida: " << &pVida << endl;
    cout << "Dado apontado pelo ponteiro *pVida: " << *pVida << endl;
    
    pVida = &saude;
    cout << "Conteudo da variavel pVida: " << pVida << endl;
    cout << "Dado apontado pelo ponteiro *pVida: " << *pVida << endl;
    
    int v1, v2, v3, v4, v5;
    
    v1 = 4;
    v2 = 8;
    v3 = 21;
    v4 = 5;
    v5 = 11;
    
    cout << soma(v1, v2) << endl;
    cout << somaRef(v2, v3) << endl;
    cout << somaPtr(&v5, &v4) << endl;
    
    int soma = troca(v4, v5);
    
    cout << "Valor somado: " << soma << endl;
    cout << "V4: " << v4 << endl << "V5: " << v5 << endl;
    
    return 0;
}
