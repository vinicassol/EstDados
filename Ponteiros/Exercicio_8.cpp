#include <iostream>
using namespace std;

void defineVetor (int vetor[], int tamanhoVetor, int &min, int &max)
{
  int maior = vetor[0]; // inicializando na posição 0 do vetor
  int menor = vetor[0];

  for(int i =0; i < tamanhoVetor; i++) // percorrendo e verificando o vetor
  {
    if(maior <= vetor[i]) // verificando se o maior é maior que o numero na posição i
      maior = vetor[i];
  }

  for (int i = 0; i < tamanhoVetor; i++) 
  {
    if(menor >= vetor[i])
      menor = vetor[i];
  }

  min = menor; // "devolvendo" as variaveis que foram solicitadas
  max = maior;
}

int main() 
{
  int valores[] = {-3,1,2,3,-26,5,6,-7,8,9,10,11,12,13};
  int tamanhoVetor = 14;
  int maximo, minimo;
  
  defineVetor(valores, tamanhoVetor, minimo, maximo);

  cout << "Maior valor = " << maximo << '\n';
  cout << "Menor valor = " << minimo << '\n';
  
  return 0;
}
