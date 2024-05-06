#include <iostream>

using namespace std;

int main() {
    int numero;
    int cantidadPerfectos = 0;
    
    for (int i = 1; i <= 10; i++) {
        int sumaPerfecto = 0;

        cout<<"Ingrese un numero: ";
        cin>>numero;    

        for (int j = 1; j <= numero / 2; j++) {
            if (numero % j == 0) {
                sumaPerfecto += j;
            }
        }
        
        if ((numero == sumaPerfecto) && (numero != 0)) {
            cantidadPerfectos++;
        }
    }   

    cout<<"Hay "<<cantidadPerfectos<<" numeros perfectos."<<endl;

    return 0;
}