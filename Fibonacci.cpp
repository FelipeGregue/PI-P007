#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite um numero inteiro para gerar a sequencia de Fibonacci: ";
    cin >> n;

    int primeiro = 0, segundo = 1, proximo;

    cout << "Sequencia de Fibonacci até " << n << ":\n";

    if (n >= 1) {
        cout << primeiro << " ";
    }

    if (n >= 2) {
        cout << segundo << " ";
    }

    for (int i = 3; i <= n; i++) {
        proximo = primeiro + segundo;
        cout << proximo << " ";
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0;
}
