#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int matricula;
    double nota1, nota2, nota3;
    char continuar;

    do {
        
        cout << "Digite a matricula do aluno (apenas numeros): ";
        cin >> matricula;

        cout << "Digite a primeira nota: ";
        cin >> nota1;

        cout << "Digite a segunda nota: ";
        cin >> nota2;

        cout << "Digite a terceira nota: ";
        cin >> nota3;

        
        double media = (nota1 + nota2 + nota3) / 3;

       
        cout << "\nMatricula: " << matricula << endl;
        cout << "Nota 1: " << nota1 << endl;
        cout << "Nota 2: " << nota2 << endl;
        cout << "Nota 3: " << nota3 << endl;
        cout << "Media: " << media << endl;

        
        cout << "\nDeseja cadastrar outro aluno? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
