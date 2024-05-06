#include <iostream>

using namespace std;

int main() {
    int sueldo;
    int sueldopromedio = 0, sueldo50k = 0, sueldominimo, sueldomaximo;
    bool boolsueldo = false;

    for (int i = 1; i<=10;i++) {
        cout<<"Ingrese el sueldo del empleado: ";
        cin>>sueldo;
        cout<<endl;

        sueldopromedio += sueldo;

        if (!boolsueldo) {
            sueldomaximo = sueldo;
            sueldominimo = sueldo;
            boolsueldo = true;
        } else if (sueldo > sueldomaximo) {
            sueldomaximo = sueldo;
        } else if (sueldo < sueldominimo) {
            sueldominimo = sueldo;
        }

        if (sueldo > 50000) {
            sueldo50k++;
        }
    }

    sueldopromedio = sueldopromedio/10;

    cout<<"El sueldo maximo es $"<<sueldomaximo<<", el sueldo minimo es $"<<sueldominimo<<", el sueldo promedio es $"<<sueldopromedio<<", hay "<<sueldo50k<<" sueldos mayores a $50 mil."<<endl;

    return 0;
}