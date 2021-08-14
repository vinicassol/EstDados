#include <iostream>
using namespace std;

/*
 Elaborar um programa em leia dois valores inteiros (variaveis a e b). Em seguida faça uma
 funçao que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o
 dobro de a na propria variável a e o dobro de b, na própria variável b.
 */

int somaDoDobro(int &a, int &b)
{
    a = a*2;
    b = b*2;
    
    return a+b;
}
int main()
{
    int valorA;
    int valorB;
    int dobro;
    
    cout << "Informe valores para A e B: ";
    cin >> valorA >> valorB;
    
    dobro = somaDoDobro(valorA, valorB);
    
    cout << "Soma do Dobro: " << dobro << endl;
    cout << "Valores de A e B: " << valorA << " - " << valorB << endl;
    
    return 0;
}
    
