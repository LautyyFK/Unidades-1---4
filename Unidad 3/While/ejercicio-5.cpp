#include <iostream>

using namespace std;

int main() {

    int n1, n2;

    cout<<"Ingrese un numero: ";
    cin>>n1;

    cout<<"Ingrese un numero: ";
    cin>>n2;

    int mayor = (n1 > n2) ? n1 : n2;

    int menor = (n1 < n2) ? n1 : n2;

    menor++;
    
    while (menor <= mayor-1 ) {

        cout<<menor<<" ";

        menor++;
    }

    return 0;
}