/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main() {
    float alfajor_a, alfajor_b, alfajor_c, alfajorestotales;

    cout<<"Alfajor A vendidos: ";
    cin>>alfajor_a;

    cout<<"Alfajor B vendidos: ";
    cin>>alfajor_b;

    cout<<"Alfajor C vendidos: ";
    cin>>alfajor_c;


    alfajorestotales = alfajor_a + alfajor_b + alfajor_c;

    alfajor_a = (alfajor_a/alfajorestotales)*100;

    alfajor_b = (alfajor_b/alfajorestotales)*100;

    alfajor_c = (alfajor_c/alfajorestotales)*100;

    cout<<"A: "<<alfajor_a<<"% "<<"B: "<<alfajor_b<<"% "<<"C: "<<alfajor_c<<"% "<<endl;

    return 0;
}