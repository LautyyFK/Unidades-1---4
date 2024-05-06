#include <iostream>

using namespace std;

int main() {
    int n, n1,n2;
    bool conjunto = false, numero1 = false, desorden = false;

    for (int i = 1; i<=8; i++) {

    cout<<"Ingrese un numero: ";
    cin>>n;

    if (i % 2 != 0) {
        numero1 = false;
    }

    if ((!numero1) && (!desorden))  {
        n1 = n;
        numero1 = true;
    } else {
        n2 = n; 

        if((n1<=n2) && (!desorden)) {
            conjunto = true;
        } else {
            conjunto = false;
            desorden = true;
        }
    }

    }

    if (conjunto) {
        cout<<"Conjunto Ordenado";
    } else {
        cout<<"Conjunto No Ordenado";
    }
}