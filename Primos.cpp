#include <iostream>

using namespace std;

int main(void){
    int i, j, cont;
    
    for (i = 1; i <= 100; i++){
        cont = 0;
        for (j = 1; j <= 100; j++){
            if(i%j == 0){
                cont++;
            }
        }
        if(cont == 2){
            cout << i << endl;
        }
    }
    
    return 0;
}