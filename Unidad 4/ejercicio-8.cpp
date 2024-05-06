#include <iostream>

using namespace std;

int main() {

    int numeroAnt, numeroActual;
    bool prNumero = false;
    for (int i = 1; i <= 5; i++) {

        int numero;
        // Desorden
        bool desorden = false;
        // Primos
        int contadorPrimosGrupos = 0;
        // Menor numero Par
        int menorPar;
        bool prPar = false;
        // Positivos Ant y Ult
        int AntPositivo, UltPositivo;
        bool prPositivo = false;

        if (!prNumero) {
            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        while (!desorden) {
            
            // Prueba
            cout<<"Numero "<<numero<<" Grupo "<<i<<endl; // Prueba para Verificar numero por grupo al intercambiar los mismos.

            if (!prNumero) {
                numeroAnt = numero;
                prNumero = true;
            } 

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
                contadorPrimosGrupos++;
            }
            
            if (numero % 2 == 0) {
                if (!prPar) {
                    menorPar = numero;
                    prPar = true;
                } else if (numero < menorPar) {
                    menorPar = numero;
                }
            }
            
            if (numero > 0) {
                if (!prPositivo) {
                    UltPositivo = numero;
                    prPositivo = true;
                } else {
                    AntPositivo = UltPositivo;
                    UltPositivo = numero;
                }
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;

            if (prNumero) {
                numeroActual = numero;

                if (numeroAnt > numeroActual) {
                    desorden = true;
                }

                numeroAnt = numeroActual;
            }
        }

        cout<<endl;
        cout<<"--------> Grupo "<<i<<" <--------"<<endl;
        cout<<"Al grupo lo componen "<<contadorPrimosGrupos<<" numeros primos."<<endl;
        cout<<"El menor numero par es "<<menorPar<<endl;
        cout<<"Anteultimo Positivo "<<AntPositivo<<endl;
        cout<<"Ultimo Positivo "<<UltPositivo<<endl;
        cout<<endl;

    }

    return 0;
}
