/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int numero;

    cout<<"Ingrese el Numero: ";
    cin>>numero;

    if (numero > 0) {
        cout<<"El numero es positivo."<<endl;

    } else if (numero < 0) {
         cout<<"El numero es negativo."<<endl;

    } else {
        cout<<"El numero es cero."<<endl;
        
    }
    
    return 0;
}