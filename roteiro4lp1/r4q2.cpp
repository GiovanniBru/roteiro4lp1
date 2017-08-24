#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int nSorteado, nEscolhido, tentativas = 1;
srand(time(0));
nSorteado = (rand() % 100) + 1;

cout << "Jogo da adivinhacao" << endl;
cout << "Tente adivinhar um numero entre [1- 100]" << endl;


    while (nEscolhido != nSorteado){
        cout << "Digite um numero: ";
        cin >> nEscolhido;

        if (nEscolhido == nSorteado){
            break;
        }

        if (nEscolhido < nSorteado){
            cout << "Escolha um numero maior." << endl;
        }else{
            cout << "Escolha um numero menor." << endl;
        }

        tentativas++;
    }

cout << endl;
cout << "Parabens! Voce acertou! O numero era: [" << nSorteado << "]" << endl;
cout << "Tentativas: " << tentativas;
cout << endl;

return 0;
}
