#include <iostream>

using namespace std;

int main() {

    int numero, max, min;
    bool pNum = false;
    
    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (!pNum) {
            max = numero;
            min = numero;
            pNum = true;
        } else if (numero > max) {
            max = numero;   
        } else if (numero < min) {
            min = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<"El maximo es "<<max<<endl;
    cout<<"El minimo es "<<min<<endl;

    return 0;
}