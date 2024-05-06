/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int presupuesto_inicial, presupuesto_final, c_caramelos, mantenimiento, credito;
    float costo_caramelos;


    cout<<"Presupuesto Inicial: ";
    cin>>presupuesto_inicial;

    cout<<"Caramelos a Producir: ";
    cin>>c_caramelos;

    costo_caramelos = c_caramelos * 2.50;

    if (c_caramelos >= 100) {
        mantenimiento = (c_caramelos/100) * 5000;
    }

    presupuesto_final = mantenimiento + costo_caramelos + 10000;

    if (presupuesto_final > presupuesto_inicial) {
        credito = presupuesto_final - presupuesto_inicial;

        cout<<"El presupuesto no es suficiente, necesita un credito de $"<<credito<<endl;
    } else {
        cout<<"El presupuesto es suficiente para cubrir los costos de $"<<presupuesto_final<<endl;
    }

    return 0;
}