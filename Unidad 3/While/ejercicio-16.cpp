#include <iostream>

using namespace std;

int main() {

    int numero, numeroAnt, max;
    bool Igualdad = false;
    bool maxBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    while (!Igualdad) {

        numeroAnt = numero;

        if (!maxBool) {
            max = numero;
            maxBool = true;
        } else if (numero > max) {
            max = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;

        if (numeroAnt == numero) {
            Igualdad = true;
        }
    }

    cout<<"El maximo numero es: "<<max<<endl;


    return 0;
}