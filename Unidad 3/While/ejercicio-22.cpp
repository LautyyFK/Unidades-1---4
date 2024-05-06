#include <iostream>

using namespace std;

int main() {
    int numero;
    int CPar = 0;
    int CNeg = 0, terna = 0;

    while (CPar < 5) {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        
        if (numero < 0) {
            CNeg++;

            if (CNeg == 3) {
                terna++;
                CNeg = 0;
            }
        } else {
            CNeg = 0;
        }


        if (numero % 2 == 0) {
            CPar++;
        }

    }


    cout<<"Cantidad de ternas: "<<terna<<endl;

    return 0;
}