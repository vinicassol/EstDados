#include <iostream>
#include <stack> //Template para pilhas
using namespace std;

int main()
{
    stack<string> caminho;
    char resposta = 'n';
    string sala;

    while(resposta != 's')
    {
        cout << "Quer sair? (s/n) ";
        cin >> resposta;
        
        if (resposta != 's') // Se nao quer sair, pergunta qual a sala
        {
            cout << "Para que sala vais? ";
            cin >> sala;
            caminho.push(sala);
        }
    }
    
    cout << "\n\n Caminho da saida: \n";
    
    while(!caminho.empty())
    {
        cout << caminho.top() << endl;
        caminho.pop();
    }
    cout << "Volte sempre!" << endl;
}
