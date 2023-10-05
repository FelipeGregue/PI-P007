#include <iostream>

using namespace std;

int main() {
    int altura;
    char caractere = 'A';

    cout << "Digite a altura do padrao: ";
    cin >> altura;

    int numCaracteres = 1;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < numCaracteres; j++) {
            cout << caractere;
            caractere++;
        }
        cout << endl;

        numCaracteres++;
    }

    return 0;
}
