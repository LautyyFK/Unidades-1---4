#include <iostream>

using namespace std;

int main() {

    int numero;
    int prPar, ulPar;
    bool prParBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        
        if (numero % 2 != 0) {

            if (!prParBool) {
                prPar = numero;
                prParBool = true;
            } else {
                ulPar = numero;
            }

        }

        cout<<"Ingrese un numero: "; 
        cin>>numero;
    }

    cout<<"El primer impar es: "<<prPar<<endl;
    cout<<"El ultimo impar es: "<<ulPar<<endl;
    
    return 0;
}