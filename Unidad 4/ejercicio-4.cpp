#include <iostream>

using namespace std;

int main() {

    int sumaPositivos = 0;

    for (int i = 1; i <= 10; i++) {

        int numero;
        float contNeg = 0, contPos = 0, contNumeros = 0;
        int maxPar, maxImpar;
        bool prPar = false, prImpar = false;

        cout<<"Ingrese un numero: ";
        cin>>numero;

        while (numero != 0) {

            contNumeros++;

            if (numero % 2 == 0) {
                if (!prPar) {
                    maxPar = numero;
                    prPar = true;
                } else if (numero > maxPar) {
                    maxPar = numero;
                }

            } else {
                if (!prImpar) {
                    maxImpar = numero;
                    prImpar = true;
                } else if (numero > prImpar) {
                    maxImpar = numero;
                }

            }

            if (numero > 0) {
                contPos++;
                sumaPositivos++;
            } else if (numero < 0) {
                contNeg++;
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

    float porcPos = (contPos / contNumeros) * 100;
    float porcNeg = (contNeg / contNumeros) * 100;

    cout<<endl;
    cout<<"El maximo de los numeros pares es "<<maxPar<<endl;
    cout<<"El maximo de los numeros impares es "<<maxImpar<<endl;
    cout<<"El porcentaje de numeros positivos es "<<porcPos<<"%"<<endl;
    cout<<"El porcentaje de numeros negativos es "<<porcNeg<<"%"<<endl;
    cout<<endl;
   }
   
   cout<<"Hay un total de "<<sumaPositivos<<" numeros positivos."<<endl;

   return 0;
}