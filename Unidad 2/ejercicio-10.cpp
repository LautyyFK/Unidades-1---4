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

    int max = n1;

    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }
    if (n5 > max) {
        max = n5;
    }

    int min = n1;

    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }
    if (n4 < min) {
        min = n4;
    }
    if (n5 < min) {
        min = n5;
    }

    cout<<"El menor numero es: "<<min<<endl;
    cout<<"El maximo numero es: "<<max<<endl;

    return 0;
}

