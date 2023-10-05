#include <iostream>

using namespace std;

int main() {
    int numero, reverso = 0, original, digito;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero; // Armazenamos o número original para comparar posteriormente

    // Invertemos o número
    while (numero > 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    // Verificamos se o número original é igual ao número reverso
    if (original == reverso) {
        cout << "O número é um palíndromo." << endl;
    } else {
        cout << "O número não é um palíndromo." << endl;
    }

    return 0;
}