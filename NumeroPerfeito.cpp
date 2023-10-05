#include <iostream>

using namespace std;

bool ehNumeroPerfeito(int numero) {
    int somaDivisores = 0;

    // Encontrando divisores e somando
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verificando se é um número perfeito
    return somaDivisores == numero;
}

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (ehNumeroPerfeito(numero)) {
        cout << numero << " eh um numero perfeito." << endl;
    } else {
        cout << numero << " nao eh um numero perfeito." << endl;
    }

    return 0;
}
