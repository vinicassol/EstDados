//
//  main.cpp
//  EstDados
//
//  Created by Vinicius Cassol on 10/11/20.
//

#include <iostream>
using namespace std;

int potencia(int base, int exp)
{
    //Invocar a propria função
    if (exp == 0) //Criterio de parada
    {
        return 1;
    }
    else
    {
        return (base * potencia(base, exp-1));
    }
}

int Fib(int n)
{
    if (n<2)
        return 1;
    else
        return Fib(n-1) + Fib(n-2);
}

int main() {
    cout << Fib(50) << endl;
    return 0;
}
