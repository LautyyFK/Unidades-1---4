#include <iostream>

using namespace std;

int main() {
    int legajo, sueldo, sueldomax, legajomax;
    bool done = false;

    for (int i = 1; i<=3; i++) {
        cout<<"Ingrese el legajo: ";
        cin>>legajo;

        cout<<"Ingrese el sueldo $";
        cin>>sueldo;
        cout<<endl;

        if (!done) {
            sueldomax = sueldo;
            legajomax = legajo;
            done = true;
        } else if (sueldo > sueldomax) {
            sueldomax = sueldo;
            legajomax = legajo;
        }
    }

    cout<<"El legajo del empleado con mayor sueldo es "<<legajomax<<" $"<<sueldomax;

    return 0;
}