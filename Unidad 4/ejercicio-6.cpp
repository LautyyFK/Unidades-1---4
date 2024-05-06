#include <iostream>

using namespace std;

int main() {

    int numero, primoAnt, primoActual;
    bool prPrimo = false;
    bool primosOrdenados = true;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        
        bool esPrimo = true;

        if (numero <= 1) {
            esPrimo = false;
        }

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
            }
        }

        if (esPrimo) {
            if (!prPrimo) {
                primoAnt = numero;
                prPrimo = true;
            } else {
                primoActual = numero;

                if (primoAnt > primoActual) {
                    primosOrdenados = false;
                }   

                cout<<primoAnt<<":"<<primoActual<<endl; // Prueba

                primoAnt = primoActual;
            }
        }
        
        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    if (primosOrdenados) {
        cout<<"Ordenados."<<endl;
    } else {
        cout<<"Desordenados."<<endl;
    }

    return 0;
}