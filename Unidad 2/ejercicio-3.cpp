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

    if (numero % 2 == 0) {
        cout<<"El numero es par."<<endl;
        
    } else {
         cout<<"El numero es impar"<<endl;

    } 
    
    return 0;
}