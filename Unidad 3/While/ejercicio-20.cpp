#include <iostream>

using namespace std;

int main() {
    
    int numero;
    int prPar, ulPrimo;
    int prParUbi, ulPrimoUbi, Ubi = 1;
    bool prParBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (numero % 2 == 0) {
            if (!prParBool) {
                prPar = numero;
                prParUbi = Ubi;
                prParBool = true;
            } 
        }
        
        if (numero > 1) {

            int PrimoCheck = 2;
            bool primo = true;

            while (PrimoCheck < numero) {

                if (numero % PrimoCheck == 0) {
                    primo = false;
                }
                    PrimoCheck++;
            }

            if (primo) {
                ulPrimo = numero;
                ulPrimoUbi = Ubi;
            }

        }

        cout<<"Ingrese un numero: ";
        cin>>numero;

        Ubi++;
    }


    cout<<"Primer Numero Par: "<<prPar<<" Ubicacion: "<<prParUbi<<endl;
    cout<<"Ultimo Primo: "<<ulPrimo<<" Ubicacion: "<<ulPrimoUbi<<endl;
    return 0;
}