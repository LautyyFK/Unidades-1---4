/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    
    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;
    
    if (n1 != n2 && n2 != n3 && n1 != n3) { 
        cout<<"Los tres numeros son distintos."<<endl;
    }
    
    return 0;
}

