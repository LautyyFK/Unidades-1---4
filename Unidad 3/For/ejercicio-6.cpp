#include <iostream>

using namespace std;

int main() {
    int cantidad, n, pos = 0;

    cout<<"Ingrese la cantidad de numeros a ingresar: ";
    cin>>cantidad;

    for (int i = 1; i<=cantidad; i++ ) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (n > 0) {
            pos++;
        }
    }

    cout<<"Hay "<<pos<<" numeros positivos";

    return 0;
}