#include <iostream>

using namespace std;

int main(){
int cont = 100;
int i;

for(i=1;i<=cont; i++){
    printf("%i\n", i);
    if(i % 3 == 0 && i % 5 == 0){
        cout << i << " é múltiplo de 3 e 5 " << " FizzBuzz\n" << endl;
    }else if(i % 5 == 0){
        cout << i << " é múltiplo de 5" << " Buzz\n" << endl;
    }else if(i % 3 == 0){
        cout << i << " é múltiplo de 3" << " Fizz\n" << endl;
    }
}

return 0;
}