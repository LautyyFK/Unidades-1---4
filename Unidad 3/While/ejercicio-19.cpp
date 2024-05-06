#include <iostream>

using namespace std;

int main() {
    int numero;
    int divisor = 1;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    cout<<"Los divisores propios del "<<numero<<" son: ";

    while (divisor < numero) {
    
        if (numero % divisor == 0) {
            cout<<divisor<<" ";
        }

        divisor++;
    }

    return 0;
}