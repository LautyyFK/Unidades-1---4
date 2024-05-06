/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main() {
    int autosvendidos, comision, sueldo;

    cout<<"Cantidad de autos vendidos: ";
    cin>>autosvendidos;

    comision = autosvendidos * 700;

    sueldo = comision + 5000;

    cout<<"Sueldo: "<<"$"<<sueldo<<endl;

    return 0;
}