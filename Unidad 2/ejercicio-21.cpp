/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int cantidad_carteras;
    char tipo_cartera;
    int c_total = 0;
    int c_blancas = 45;
    int c_negras = 50;
    int c_marrones = 40;
    int c_grises = 49;
    
    cout<<"Venta 1: "<<endl;
    cout<<"Cantidad de Carteras: ";
    cin>>cantidad_carteras;

    if (cantidad_carteras > 10) {
        cout<<"Las venta no puede superar las 10 carteras. Ingrese Nuevamente."<<endl;

        cout<<"Cantidad de Carteras: ";
        cin>>cantidad_carteras;
    } else {

        cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
        cin>>tipo_cartera;

        switch(tipo_cartera) {
            case 'B':
                c_blancas -= cantidad_carteras;
                break;
            case 'N':
                c_negras -= cantidad_carteras;
                break;
            case 'M':
                c_marrones -= cantidad_carteras;
                break;
            case 'G':
                c_grises -= cantidad_carteras;
                break;
            default:
                cout<<"Ingreso un Tipo de Cartera incorrecto. Ingrese Nuevamente." <<endl;

                cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
                cin>>tipo_cartera;
                break; 
    }

        c_total += cantidad_carteras;
    }

        cout<<"Venta 2: "<<endl;
    cout<<"Cantidad de Carteras: ";
    cin>>cantidad_carteras;

    if (cantidad_carteras > 10) {
        cout<<"Las venta no puede superar las 10 carteras. Ingrese Nuevamente."<<endl;

        cout<<"Cantidad de Carteras: ";
        cin>>cantidad_carteras;
    } else {

        cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
        cin>>tipo_cartera;

        switch(tipo_cartera) {
            case 'B':
                c_blancas -= cantidad_carteras;
                break;
            case 'N':
                c_negras -= cantidad_carteras;
                break;
            case 'M':
                c_marrones -= cantidad_carteras;
                break;
            case 'G':
                c_grises -= cantidad_carteras;
                break;
            default:
                cout<<"Ingreso un Tipo de Cartera incorrecto. Ingrese Nuevamente." <<endl;

                cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
                cin>>tipo_cartera;
                break; 
    }

        c_total += cantidad_carteras;
    }

        cout<<"Venta 3: "<<endl;
    cout<<"Cantidad de Carteras: ";
    cin>>cantidad_carteras;

    if (cantidad_carteras > 10) {
        cout<<"Las venta no puede superar las 10 carteras. Ingrese Nuevamente."<<endl;

        cout<<"Cantidad de Carteras: ";
        cin>>cantidad_carteras;
    } else {

        cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
        cin>>tipo_cartera;

        switch(tipo_cartera) {
            case 'B':
                c_blancas -= cantidad_carteras;
                break;
            case 'N':
                c_negras -= cantidad_carteras;
                break;
            case 'M':
                c_marrones -= cantidad_carteras;
                break;
            case 'G':
                c_grises -= cantidad_carteras;
                break;
            default:
                cout<<"Ingreso un Tipo de Cartera incorrecto. Ingrese Nuevamente." <<endl;

                cout<<"Tipo de Cartera (B - Blanco, N - Negro, M - Marron, G - Gris): ";
                cin>>tipo_cartera;
                break; 
    }

        c_total += cantidad_carteras;
    }

    cout<<"Cantidad total de carteras vendidas: "<<c_total<<endl;
    cout<<"Carteras restantes: Blancas "<<c_blancas <<", Negras "<<c_negras<<", Marrones "<<c_marrones<<", Grises "<<c_grises<<endl;

    cout << "Colores de carteras que no se vendieron: ";
    if (c_blancas == 45) {
         cout << "Blanco ";
    }
    if (c_negras == 50) {
        cout << "Negro ";
    }
    if (c_marrones == 40) {
        cout << "Marron ";
    }
    if (c_grises == 49) {
        cout << "Gris ";
    }

    return 0;
}