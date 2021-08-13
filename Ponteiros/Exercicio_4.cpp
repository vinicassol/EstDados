#include <iostream>
using namespace std;

/* Escreva uma funçao que aceita como parmetro um vetor de inteiros com n valores, e determina
 o maior elemento do vetor e o numero de vezes que este elemento ocorreu no vetor.
 Por exemplo, para um vetor com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a funçao deve
 retornar para o programa que a chamou o valor 15 e o número 3
 (indicando que o numero 15 ocorreu 3 vezes). A função deve ser do tipo void.*/

void examinaVetor(int vetor[], int t, int &resultado, int &qtd)
{
    int maiorValor = 0;
    int contaVezes = 0;
    
    for(int i=0; i < t; i++)
    {
        if(vetor[i] > maiorValor)
            maiorValor = vetor[i];
    }
    
    for(int i=0; i < t; i++)
    {
        if(vetor[i] == maiorValor)
            contaVezes++;
    }
    
    //atualizando os parametros de retorno
    resultado = maiorValor;
    qtd = contaVezes;
}

int main()
{
    int meuVetor[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanhoVetor = 9;
    
    //Variaveis de retorno
    int maiorNumero;
    int totalOcorrencias;
    
    
    examinaVetor(meuVetor, tamanhoVetor, maiorNumero, totalOcorrencias);
    cout << "Maior elemento no vetor: " << maiorNumero << endl;
    cout << "Total de Ocorrencias: " << totalOcorrencias << endl;
    
    return 0;
}
    
