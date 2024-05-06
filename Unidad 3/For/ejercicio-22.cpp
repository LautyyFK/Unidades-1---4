#include <iostream>

using namespace std;

int main() {
    int n, par, ubipar, primo, ubiprimo;
    
    bool parbool = false;

    for (int i = 1; i<=7; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if ((!parbool) && (n % 2 == 0)) {
            par = n;
            ubipar = i;
            parbool = true;
        }

        bool primobool = true;

        if (n <= 1) {
            primobool = false;
        }

        for (int j = 2; j<n; j++) {
            if (n % j == 0) {
                primobool = false;
            }
        }

        if (primobool) {
            primo = n;
            ubiprimo = i;
        }
    }

    cout<<"El primer par es "<<par<<" con ubicacion "<<ubipar<<endl;
    cout<<"El ultimo primo es "<<primo<<" con ubicacion "<<ubiprimo<<endl;

    return 0;
}