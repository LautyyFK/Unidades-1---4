/*
Autor: Lautaro Flor
Fecha de creación: 20/03
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    cout<<"Ingrese un año: ";
    cin>>year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout<<"El año "<<year<<" es bisiesto."<<endl;

    } else {
        cout<<"El año "<<year<<" no es bisiesto."<<endl;

    }

    return 0;
}

