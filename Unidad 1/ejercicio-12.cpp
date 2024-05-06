/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    int huevos, cajas, sueltos, total;

    cout<<"Ingrese la cantidad de huevos: ";
    cin>>huevos;

    cajas = huevos/12;
    sueltos = huevos % 12;

    total = (cajas*1000) + (sueltos*120);

    cout<<"Hay "<<cajas<<" cajas y "<<sueltos<<" sueltos,"<<" el importa total es: $"<<total<<endl;

    return 0;
}