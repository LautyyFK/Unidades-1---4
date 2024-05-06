#include <iostream>

using namespace std;

int main() {    

    bool imparMaxTotal = false;
    int imparMax, imparMaxGrupo;
    int mayoraMenor = 0;

    for (int i = 1; i <= 3; i++) {

        int numero, ulPrimo, primoPos;
        float contImpares = 0, contNumeros = 0;
        bool primoEncontrado = false;
        // Mayor a Menor
        int n1, n2;
        bool orden = true, prNum = false;

        cout<<"Ingrese un numero: ";
        cin>>numero;

        while (numero != 0) {
            contNumeros++;

            if (numero > 0) {
                if (numero % 2 != 0) {
                    contImpares++;
                }
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
                ulPrimo = numero; 
                primoPos = contNumeros;
                primoEncontrado = true;
            }

            if (!prNum) {
                n1 = numero;
                prNum = true;
            } else {
                n2 = numero;

                if (n1 < n2) {
                    orden = false;                    
                }

                n1 = n2;
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        if (orden) {
            mayoraMenor++;
        }

        cout<<endl;

        if (!primoEncontrado) {
            cout<<"No hay numeros primos."<<endl;
        } else {
            cout<<"El ultimo numero primo es "<<ulPrimo<<endl;
            cout<<"Con posicion en "<<primoPos<<endl;

        }
        
        float porcImpares = (contImpares / contNumeros) * 100;

        if (!imparMaxTotal) {
            imparMax = porcImpares;
            imparMaxGrupo = i;
            imparMaxTotal = true;
        } else if (porcImpares > imparMax) {
            imparMax = porcImpares;
            imparMaxGrupo = i;
        }

        cout<<endl;
    }

    cout<<"El grupo con mayor porcentaje es el grupo "<<imparMaxGrupo<<" con "<<imparMax<<"%"<<endl;

    return 0;
}