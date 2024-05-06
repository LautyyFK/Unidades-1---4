/*
Autor: Lautaro Flor
Fecha de creación: 20/03
*/

#include <iostream>
using namespace std;

int main() {
    int diaNacimiento, mesNacimiento, yearNacimiento;
    int diaActual, mesActual, yearActual;

    cout<<"Ingrese el dia nacimiento: ";
    cin>>diaNacimiento;

    cout<<"Ingrese el mes nacimiento: ";
    cin>>mesNacimiento;

    cout<<"Ingrese el año nacimiento: ";
    cin>>yearNacimiento;

    cout<<"Ingrese el dia actual: ";
    cin>>diaActual;

    cout<<"Ingrese el mes actual: ";
    cin>>mesActual;

    cout<<"Ingrese el año actual: ";
    cin>>yearActual;


    int edad = yearActual - yearNacimiento;

    if (mesActual < mesNacimiento) {
        edad--;
    }

    else if (mesActual == mesNacimiento && diaActual < diaNacimiento) {
        edad--;
    }

    cout<<"La edad de la persona es "<<edad<<endl;

    return 0;
}


