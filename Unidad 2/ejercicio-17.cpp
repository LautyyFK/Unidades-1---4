/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;

    cout<<"Numero Uno: ";
    cin>>n1;

    cout<<"Numero Dos: ";
    cin>>n2;

    cout<<"Numero Tres: ";
    cin>>n3;

    cout<<"Numero Cuatro: ";
    cin>>n4;

    if (n1<=n2 && n2<= n3 && n3<=n4) {
        cout<<"Conjunto Ordenado";
    } else {
        cout<<"Conjunto Desordenado";
    }

    return 0;
}