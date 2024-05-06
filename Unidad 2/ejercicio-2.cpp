/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    
    cout<<"Ingrese el primer numero: ";
    cin>>n1;

    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    
    if (n2 != 0 && n1 % n2 == 0) {
        cout<<n1<<" es multiplo de "<<n2<<endl;

    } else {
        cout<<n1<<" no es multiplo de "<<n2<<endl;
        
    }
    
    return 0;
}