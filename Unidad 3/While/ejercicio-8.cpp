#include <iostream>

using namespace std;

int main() {

    int numero, max;
    int Cpos = 1, pos;
    bool pMax = false; 
    
    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    while (numero != 0) {

        if (!pMax) {
            max = numero;
            pos = Cpos;
            pMax = true;   
        } else if (numero > max) {
            max = numero;
            pos = Cpos;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
        Cpos++;
    }

    cout<<"El maximo es "<<max<<" con posicion "<<pos<<endl;

    return 0;
}