/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/ 

#include <iostream>

using namespace std;

int main() {
    int horas, dias, horasrestantes;

    cout<<"Ingrese la cantidad de minutos: ";
    cin>>horas;

    dias = horas / 24;
    horasrestantes = horas % 24;

    cout<<"Las "<<horas<<" horas equivalen a "<<dias<<" dias y "<<horasrestantes<<" horas."<<endl;

    return 0;
}