#include <iostream>

using namespace std;

int main() {

    int numero, prMax, segMax;
    bool prMaxBool = false, segMaxBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (!prMaxBool) {
            prMax = numero;
            prMaxBool = true;

        } else if (numero > prMax) {
            segMax = prMax;
            prMax = numero;
            
        } else if (!segMaxBool) {
            segMax = numero;
            segMaxBool = true;

        } else if (numero > segMax) {
            segMax = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<"El primer mayor es: "<<prMax<<endl;
    cout<<"El segundo mayor es: "<<segMax<<endl;
    
    return 0;
}