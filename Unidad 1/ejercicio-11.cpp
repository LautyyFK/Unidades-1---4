/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    int minutos, dias, horas, minutosrestantes;

    cout<<"Ingrese la cantidad de minutos: ";
    cin>>minutos;

    dias = minutos/(24*60);
    horas = (minutos % (24*60))/60;
    minutosrestantes = minutos % 60;

    cout<<"Los "<<minutos<<" minutos equivalen a "<<dias<<" dia, "<<horas<<" hora y "<<minutosrestantes<<" minutos."<<endl;

    return 0;
}
