/*
Autor: Lautaro Flor
Fecha de creación: 20/03
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, temp;

    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;


    if (n1 > n2) { 
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    cout<<n1<<", "<<n2<<", "<<n3<<endl;

    return 0;
}