#include <iostream>

using namespace std;

int main() {

    int numero;
    int prPar, segPar;
    bool prParBool = false, segParBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        
        if (numero % 2 != 0) {

            if (!prParBool) {
                prPar = numero;
                prParBool = true;
            } else if (!segParBool) {
                segPar = numero;
                segParBool = true;
            }

        }

        cout<<"Ingrese un numero: "; 
        cin>>numero;
    }

    cout<<"El primer impar es: "<<prPar<<endl;
    cout<<"El segundo impar es:"<<segPar<<endl;

    return 0;
}