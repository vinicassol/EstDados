//
//  Ponteiros_Ex_14.cpp
//  Algoritmos
//
//  Created by Vinicius Cassol on 06/11/20.
//

/*
 Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Após o retorno da função, exibir x3 na tela.
 Exemplo: Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}.
 
 Assinatura da função:

 */

#include <iostream>
using namespace std;

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)
{
    /*for(int i = 0; i<n1; i++)
    {
        cout << "X1[" << i << "] = " << x1[i] << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i<n1; i++)
    {
        cout << "X2[" << i << "] = " << x2[i] << endl;
    }*/
    
    int sizeTemp = n1+n2;
    int *temp;
    
    temp = new int [sizeTemp];
    int posTemp = 0;
    
    for(int i = 0; i<n1; i++)
    {
        temp[posTemp] = x2[i];
        posTemp++;
    }
    
    for(int i = 0; i<n1; i++)
    {
        bool temIgual = false;
        for(int j = 0; j<posTemp; j++)
        {
            if(temp[j] == x1[i])
                temIgual =true;
        }
        if(!temIgual)
        {
            temp[posTemp] = x1[i];
            posTemp++;
        }
        else
            temIgual = false;
    }

    
    int *x3 = new int[posTemp];
    *qtd = posTemp;
    
    for(int i = 0; i<posTemp; i++)
    {
        //cout << "temp[" << i << "] = " << temp[i] << endl;
        x3[i] = temp[i];
    }
    
    return x3;
}

int main()
{
    int *vetor1;
    int *vetor2;
    int *vetor3;
    int tamanho1 = 5;
    int tamanho2 = 5;
    int tamanho3;
    
    vetor1 = new int[tamanho1];
    vetor2 = new int[tamanho2];
    
    vetor1[0] = 1;
    vetor1[1] = 3;
    vetor1[2] = 5;
    vetor1[3] = 6;
    vetor1[4] = 7;
    
    vetor2[0] = 1;
    vetor2[1] = 3;
    vetor2[2] = 4;
    vetor2[3] = 6;
    vetor2[4] = 8;
    
    vetor3 = uniao(vetor1, vetor2, tamanho1, tamanho2, &tamanho3);
    
    cout << "\n\n Vetor Resultado da Uniao. Numero de elementos: " << tamanho3 << endl;
    for(int i = 0; i < tamanho3; i++)
    {
        cout << "vetor3[" << i << "] = " << vetor3[i] << endl;
    }
    
return 0;
}
