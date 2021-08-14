#include <iostream>
using namespace std;

void updateVariaveis( int &v1, int &v2)
{
    v1--;
    v2-=2;
    cout << v1 << " - " << v2 << endl;
}

int main()
{
    //Ponteiros:são variaveis que armazenam o endereçod e memória de outra variavel
    int hp = 100; //variavel do tipo inteiro, com valor 100
    int vida = 80;
    string nome = "Mario";
    
    updateVariaveis(hp, vida);
    
    //ponteiro do tipo inteiro, que vai apontar para a variavel HP
    int *ptr;
    ptr = &hp;
    
    cout << "Valor salvo na variavel ptr: " << ptr << endl; //enderço da variavel HP
    cout << "Endreço variavel HP: " << &hp << endl;
    
    //O ponteiro PTR vai apontar para o conteudo salvo no endreço da variavel HP
    cout << "Valor apontado por *ptr: " << *ptr << endl;
    
    //mudar para onde o ponteiro está apontando
    ptr = &vida;
    cout << "Valor apontado por *ptr: " << *ptr << endl;
    
    return 0;
}
    
