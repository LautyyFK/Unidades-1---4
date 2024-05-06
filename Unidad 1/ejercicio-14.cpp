/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    int importe, descuento, total;

    cout<<"Ingrese el importe: $";
    cin>>importe;

    cout<<"Ingrese el descuento: %";
    cin>>descuento;

    descuento = (importe*descuento)/100;

    total = importe-descuento;

    cout<<"Importe: $"<<importe<<", Descuento: $"<<descuento<<", Total: $"<<total<<endl;

    return 0;
}