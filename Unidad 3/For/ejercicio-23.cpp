#include <iostream>

using namespace std;

int main() {
    int n, n1, n2;
    int contador = 0;
    bool numero1 = false, numero2 = false;

    for (int i = 1; i<=10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (!numero1) {
            n1 = n;
            numero1 = true;
        } else {
            n2 = n;
            numero2 = true;
        } 

        if (numero2) {
                if ((n1 % 2 != 0) && (n2 % 2 != 0)) {
                    contador++;
                    cout<<"dupla "<<n1<<":"<<n2<<endl; // No hace falta esto lo hice nomas como un check 
                }
                n1 = n2;
         }
    }

    cout<<"Hay "<<contador<<" duplas de numeros impares";

    return 0;
}