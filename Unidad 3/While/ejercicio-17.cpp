#include <iostream>

using namespace std;

int main() {

    int numero, numeroAnt, max;
    bool conPos = false;
    bool maxBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    while (!conPos) {

        numeroAnt = numero;

        if (!maxBool) {
            max = numero;
            maxBool = true;
        } else if (numero > max) {
            max = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;

        if ((numeroAnt > 0) && (numero > 0)) {
            conPos = true;
        }
    }

    cout<<"El maximo numero es: "<<max<<endl;


    return 0;
}