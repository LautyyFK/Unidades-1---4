/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    float importe, descuento, total;
    
    cout<<"Ingrese el importe: $";
    cin>>importe;
    
    if (importe < 100) {
     descuento = 5; 
     total = importe - (importe * 0.05);

    } else if (importe >=100 && importe <=500) {
     descuento = 10;
     total = importe - (importe * 0.10);

    } else {
     descuento = 15;
     total = importe - (importe * 0.15);

    }

    cout<<"El importe de "<<importe<<" tiene un descuento de "<<descuento<<"%, el total es $"<<total<<endl;

    return 0;
}
