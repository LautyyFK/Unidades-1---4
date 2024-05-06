/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/ 

#include <iostream>

using namespace std;

int main() {

    float importeventa, descuento, total;

    cout<<"Ingrese el importe de la venta: $";
    cin>>importeventa;

    cout << "Ingrese el porcentaje de descuento: ";
    cin>>descuento;

    total = importeventa - (importeventa * descuento/100);

    cout<<"El total a pagar es: $"<<total<<endl;

    return 0;
}