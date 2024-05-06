/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, diferencia;
    
    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    
    if (n1 > n2) {
        diferencia = n1 - n2;
    } else {
        diferencia = n2 - n1;
    }
    
    cout<<"La diferencia absoluta es "<<diferencia<<endl;
    
    return 0;
}
