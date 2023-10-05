#include <iostream>
#include <cmath>

using namespace std;

int contarDigitos(int numero) {
    int digitos = 0;
    while (numero > 0) {
        numero /= 10;
        digitos++;
    }
    return digitos;
}

bool ehNumeroArmstrong(int numero) {
    int digitos = contarDigitos(numero);
    int soma = 0;
    int temp = numero;

    while (temp > 0) {
        int digito = temp % 10;
        soma += pow(digito, digitos);
        temp /= 10;
    }

    return soma == numero;
}

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (ehNumeroArmstrong(numero)) {
        cout << numero << " eh um numero de Armstrong." << endl;
    } else {
        cout << numero << " nao eh um numero de Armstrong." << endl;
    }

    return 0;
}
