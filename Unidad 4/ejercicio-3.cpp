#include <iostream>

using namespace std;

int main() {
    int numero;
    float contadorPrimos = 0;
    float contadorNumeros = 0;
    float primosPorcentaje, noPrimosPorcentaje;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        contadorNumeros++;

        bool esPrimo = true;

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

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    primosPorcentaje = (contadorPrimos / contadorNumeros) * 100;
    noPrimosPorcentaje = ((contadorNumeros - contadorPrimos) / contadorNumeros) * 100;

    cout<<"Hay "<<primosPorcentaje<<"% de numeros primos."<<endl;
    cout<<"Hay "<<noPrimosPorcentaje<<"% de numeros no primos."<<endl;
    
    return 0;
}