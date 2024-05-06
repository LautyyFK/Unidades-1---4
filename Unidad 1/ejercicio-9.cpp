/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/ 

#include <iostream>

using namespace std;

int main() {
    int minutos, horas, minutosrestantes;

    cout<<"Ingrese la cantidad de minutos: ";
    cin>>minutos;

    horas = minutos / 60;
    minutosrestantes = minutos % 60;

    cout<<"Los "<<minutos<<" minutos equivalen a "<<horas<<" horas y "<<minutosrestantes<<" minutos."<<endl;

    return 0;
}
