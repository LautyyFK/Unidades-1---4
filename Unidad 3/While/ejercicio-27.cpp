#include <iostream>

using namespace std;

int main() {

    int cantidad, aulas = 1;
    int cantidadres;
    cout<<"Ingrese la cantidad: ";
    cin>>cantidad;

    cantidadres = cantidad;

    while (cantidadres > 60) {
        cantidadres = cantidadres - 60;
        aulas++;
    }

    cout<<"Si hay "<<cantidad<<" asistentes se necesitan "<<aulas<<" aulas."<<endl;

    return 0;
}
