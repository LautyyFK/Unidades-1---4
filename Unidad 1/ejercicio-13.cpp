/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>

using namespace std;

int main() {
    int importe, b_1000, b_500, b_200, b_100;

    cout<<"Ingrese el importe a retirar: $";
    cin>>importe;

    b_1000 = importe/1000;
    importe = importe % 1000;

    b_500 = importe/500;
    importe = importe % 500;

    b_200 = importe/200;
    importe = importe % 200;

    b_100 = importe/100;

    cout<<"Para retirar $"<<importe<<" se deberán entregar: "<<b_1000<<" billetes de $1000, "<<b_500<<" billetes de $500, "<< b_200<<" billetes de $200, "<<b_100<<" billetes de $100."<<endl;

    return 0;

}