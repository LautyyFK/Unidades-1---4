#include <iostream>

using namespace std;

int main() {
    int n, max;
    bool maxbool = true;
    bool pares = false;

    for (int i = 1; i<=10; i++) {
        cout<<"Ingrese un  numero: ";
        cin>>n;

        if (n % 2 == 0) {
            if (maxbool) {
                max = n;
                maxbool = false;
            } else if (n > max) { 
                max = n;
                pares=true;
            }
        }
    }

    if (pares) {
        cout<<"El maximo de los pares es: "<<max;
    } else {
        cout<<"No hay pares";
    }

    return 0;
}