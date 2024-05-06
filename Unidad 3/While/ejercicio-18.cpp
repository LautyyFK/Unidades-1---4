#include <iostream>

using namespace std;

int main() {
    int numero;
    bool primo = true;
    int primoMeta = 2;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    if (numero <= 1) {
        primo = false; 
    }

    while (primoMeta < numero) {
    
        if (numero % primoMeta == 0) {
            primo = false;
        }

        primoMeta++;
    }

    if (primo) {
        cout<<"Es primo"<<endl;
    } else {
        cout<<"No es primo"<<endl;
    }

    return 0;
}