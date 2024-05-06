#include <iostream>

using namespace std;

int main() {

    int numero;
    int diferencia = 0, contador = 0;
    int max, min;
    bool prNum = false;

    

    while (diferencia <= 10) {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        contador++;

        if (!prNum) {
            max = numero;
            min = numero;
            prNum = true;
        } else if (numero > max) {
            max = numero;
        } else if (numero < min) {
            min = numero;
        }

        diferencia = max - min;
     }

     cout<<"Cantidad de numeros: "<<contador<<endl;

     return 0;
}