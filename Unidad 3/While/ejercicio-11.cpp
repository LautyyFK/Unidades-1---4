#include <iostream>

using namespace std;

int main() {

    int numero;
    int MinPos, MaxNeg;
    bool pPos = false, pNeg = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (numero > 0) {

            if (!pPos) {
                 MinPos = numero;
                pPos = true;
            } else if ( numero < MinPos) {
                MinPos = numero;
            }

        } else if (numero < 0) { 
            if (!pNeg) {
                MaxNeg = numero;
                pNeg = true;
            } else if (numero > MaxNeg) {
                MaxNeg = numero;
            }
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<"El maximo de los negativos es: "<<MaxNeg<<endl;
    cout<<"El minimo de los positivos es: "<<MinPos<<endl;

    return 0;
}