#include <iostream>

using namespace std;

int main() { 
    int numero;
    int ulPar, AntPar;
    bool Impar = false;
    bool AntBool = false;

    cout<<"Ingrese un numero: ";
    cin>>numero;       

    while (numero % 7 != 0) { 
        
        if (numero % 2 != 0) {
            Impar = true;
            if (!AntBool) {
                ulPar = numero;
                AntPar = numero;
                AntBool = true;
            } else {
                AntPar = ulPar;
                ulPar = numero;
            }
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;       
    }   

    if (Impar) {
        cout<<"Ultimo Impar: "<<ulPar<<endl;
        cout<<"Ante Ultimo Impar: "<<AntPar<<endl;
    } else {
        cout<<"No hay impares."<<endl;
    }

    return 0;
}