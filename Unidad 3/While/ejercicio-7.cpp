#include <iostream>

using namespace std;

int main() {

    int numero, max;
    bool pMax = false; 
    
    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (!pMax) {
            max = numero;
            pMax = true;
        } else if (numero > max) {
            max = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<"El maximo es "<<max<<endl;

    return 0;
}