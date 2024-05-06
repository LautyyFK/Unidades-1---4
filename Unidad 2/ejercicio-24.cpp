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

    if (mes % 3 == 0) {
        total = mes/3;
    } else if (mes % 3 == 1) {
        total = (mes+2)/3;
    } else {
        total = (mes+1)/3;
    }

    cout<<"Trimestre: "<<total<<endl;

    return 0;
}

