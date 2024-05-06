/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    
    cout<<"Ingrese el primer numero: ";
    cin>>n1;

    cout<<"Ingrese el segundo numero: ";
    cin>>n2;

    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

    cout<<"Ingrese el cuarto numero: ";
    cin>>n4;

    cout<<"Ingrese el quinto numero: ";
    cin>>n5;
    
    int positivos = 0, negativos = 0, ceros = 0;
    
    if (n1 > 0) {
        positivos++;
    } else if (n1 < 0) {
        negativos++;
    } else {
        ceros++;
    }
    
    if (n2 > 0) {
        positivos++;
    } else if (n2 < 0) {
        negativos++;
    } else {
        ceros++;
    }

        if (n3 > 0) {
        positivos++;
    } else if (n3 < 0) {
        negativos++;
    } else {
        ceros++;
    }

        if (n4 > 0) {
        positivos++;
    } else if (n4 < 0) {
        negativos++;
    } else {
        ceros++;
    }

        if (n5 > 0) {
        positivos++;
    } else if (n5 < 0) {
        negativos++;
    } else {
        ceros++;
    }
    

    cout << "Hay "<<positivos<<" numeros positivos, "<<negativos<<" numeros negativos y "<<ceros<<" numeros iguales a 0."<<endl;
    
    return 0;
}
