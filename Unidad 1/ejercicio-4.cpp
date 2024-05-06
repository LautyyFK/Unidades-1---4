/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main() {
    float asientostotales, asientosocupados, p_ocupacion, p_no_ocupacion;

    cout<<"Asientos Totales: ";
    cin>>asientostotales;

    cout<<"Asientos Ocupados: ";
    cin>>asientosocupados;

    p_ocupacion = (asientosocupados/asientostotales)*100;

    p_no_ocupacion = 100 - p_ocupacion;

    cout<<"La ocupacion es: "<<"%"<<p_ocupacion<<endl<<"La no ocupacion es: "<<"%"<<p_no_ocupacion<<endl;

    return 0;
}