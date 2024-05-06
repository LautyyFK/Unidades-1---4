/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    float temperaturamax, temperaturamin, amplitud;

    cout<<"Ingrese la temperatura maxima: ";
    cin>>temperaturamax;

    cout<<"Ingrese la temperatura minima: ";
    cin>>temperaturamin;

    amplitud = temperaturamax - temperaturamin;

    cout<<"La amplitud termica es de "<<amplitud<<" grados."<<endl;

    return 0;
}
