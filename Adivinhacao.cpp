#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    
    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    bool acertou = false;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!\n";
    
    while (!acertou) {
        cout << "Digite seu palpite (entre 1 e 100): ";
        cin >> palpite;
        
        if (palpite < 1 || palpite > 100) {
            cout << "Por favor, digite um número entre 1 e 100.\n";
            continue;
        }

        tentativas++;

        if (palpite == numeroSecreto) {
            acertou = true;
        } else if (palpite < numeroSecreto) {
            cout << "Palpite baixo. Tente novamente.\n";
        } else {
            cout << "Palpite alto. Tente novamente.\n";
        }
    }

    cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas.\n";

    return 0;
}
