/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int mes, total;

    cout<<"Mes: ";
    cin>>mes;

    if (mes % 2 == 0) {
        total = mes/2;
    } else {
        total = (mes + 1) / 2;
    }

    cout<<"Bimestre: "<<total<<endl;

    return 0;
}