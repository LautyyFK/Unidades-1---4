#include <iostream>

using namespace std;

int main() {
    int numero;
    int contadorPrimos = 0;

    for (int i = 1; i <= 10; i++) {

        bool esPrimo = true;

        cout<<"Ingrese un numero: ";
        cin>>numero;

        if (numero <= 1) {
            esPrimo = false;
        }

        for (int j = 2; j < numero; j++) {
            if (numero % j == 0) {
                esPrimo = false;
            }
        } 

        if (esPrimo) {
            contadorPrimos++;
        } 
    }

    cout<<"Hay "<<contadorPrimos<<" numeros primos."<<endl;
    
    return 0;
}