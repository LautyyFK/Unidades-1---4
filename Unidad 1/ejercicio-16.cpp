/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    int frasco, pildoras, mg_betamol, mg_micilina, mg_acido;

    cout<<"Ingrese la cantidad de Frascos: ";
    cin>>frasco;

    pildoras = frasco*75;

    mg_betamol = pildoras*45;
    mg_micilina = pildoras*2000;
    mg_acido = pildoras*7;

    cout<<"Los "<<frasco<<" frascos los cuales tienen "<<pildoras<<" pildoras necesitan, "<<mg_betamol<<" miligramos de Betamol, "<<mg_micilina<<" miligramos de Micilina, "<<mg_acido<<" miligramos de Acido Sinitico"<<endl;

    return 0;
}