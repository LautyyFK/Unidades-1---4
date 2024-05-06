#include <iostream>

using namespace std;

int main() {
    int n, mayor1, mayor2;
    bool numero1 = false;

    for (int i = 1; i<=5; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (!numero1) {
            mayor1 = n;
            mayor2 = n;
            numero1 = true;
        } else if (n > mayor1) {
            mayor2 = mayor1;
            mayor1 = n;
        } else if ((n > mayor2) || (i == 2) ) {
            mayor2 = n;
        } 
    }

    cout<<"Resultado: "<<mayor1<<" y "<<mayor2;

    return 0;
}