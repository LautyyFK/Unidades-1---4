/*
Autor: Lautaro Flor
Fecha de creación: 19/03
*/
 
#include <iostream>
 
using namespace std; 

int main() {
    float venta_sin_desc, venta_con_desc, porcentaje_desc;

    cout<<"Importe de la venta sin descuento: $";
    cin>>venta_sin_desc;

    cout<<"Importe de la venta con descuento: $";
    cin>>venta_con_desc;

    porcentaje_desc = ((venta_sin_desc-venta_con_desc)/venta_sin_desc)*100;

    cout<<"El descuento aplicado es: "<<porcentaje_desc<<"%"<<endl;

    return 0;
}