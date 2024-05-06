#include <iostream>

using namespace std;

int main() {

    int n;

    cout<<"Ingrese el numero: ";
    cin>>n;


    int numero = 2;
    
    while (numero <= n-1) {
        
        cout<<numero<<" ";

        numero++;
    }

    return 0;
}