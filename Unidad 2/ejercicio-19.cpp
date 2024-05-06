/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int horas;
    char lenguaje;
    bool urgente;

    cout<<"Ingrese la cantidad de horas: ";
    cin>>horas;

    cout<<"Ingrese el tipo de lenguaje (C, #, P, G): ";
    cin>>lenguaje;
    
    cout<<"¿El proyecto es urgente? (1 para Si, 0 para No): ";
    cin>>urgente;  

    int valor_h, total;

    switch (lenguaje) {
    case 'C':
        valor_h = 7500;
        break;
    case '#':
        valor_h = 6100;
        break;
    case 'P':
        valor_h = 5400;
        break;
    case 'G':
        valor_h = 5000;
        break;
    default:
        cout << "El lenguaje no es valido." << endl;
         return 0;
    }

    total = valor_h * horas;

     if (urgente) {
        total *= 2.2; 
    }

    cout<<"El costo total del proyecto es: $"<<total<<endl;
}