/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int kw, total;

    cout<<"Kilovatio (kW): ";
    cin>>kw;

    if (kw <= 100) {
        total = 10 * kw;
    } else if (kw <= 200) {
        total = 1000 + 12 * (kw - 100);
    } else {
        total = 2200 + 15 * (kw - 200);
    }
    
    cout << "Total a pagar: $"<<total<<endl;
    
    return 0;
}