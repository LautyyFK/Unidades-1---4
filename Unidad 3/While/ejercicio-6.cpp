#include <iostream>

using namespace std;

int main() {

    int CPos = 0, CNeg = 0;
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {

        if (numero > 0) {
            CPos++;
        } else if (numero < 0) {
            CNeg++;
        }

    cout<<"Ingrese un numero: ";
    cin>>numero;

    }

    cout<<"Hay una cantidad de "<<CPos<<" numeros positivos."<<endl;
    cout<<"Hay una cantidad de "<<CNeg<<" numeros negativos."<<endl;

    return 0;
}