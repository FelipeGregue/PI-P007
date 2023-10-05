#include <iostream>

using namespace std;

int main(void){
    int num, i; 
    cout << "Digite o numero: ";
    cin >> num;
    for (i = 1; i <= num; i++){
        if(num%i == 0){
            cout << i << " é divisor de " << num << endl;
        }
    }
    return 0;
}