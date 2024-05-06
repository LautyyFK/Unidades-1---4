/*
Autor: Lautaro Flor
Fecha de creación: 20/03
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, med;

    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;
    
    if (n1 > n2) {
        if (n1 < n3) {
            med = n1;
        } else if (n2 < n3) {
            med = n3;
        } else {
            med = n2;
        }
    } else {
        if (n2 < n3) {
            med = n2;
        } else if (n1 < n3) {
            med = n3;
        } else {
            med = n1;
        }
    }


    cout<<"El numero del medio es: "<<med<<endl;

    return 0;
}
