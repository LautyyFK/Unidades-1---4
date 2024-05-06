#include <iostream>

using namespace std;

int main() {

    int numero, numTemp;
    bool Temp = false;
    bool orden = true;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (!Temp) {
            numTemp = numero;
            Temp = true;
        } else {

            if (numTemp > numero) {
                orden = false;
            }

            numTemp = numero;
        }

        cout<<"Ingrese un numero: "; 
        cin>>numero;    
    }

    if (orden) {
        cout<<"Conjunto Ordenado"<<endl;
    } else {
        cout<<"Conjunto No Ordenado"<<endl;
    }
    
    return 0;
}