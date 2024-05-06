#include <iostream>

using namespace std;

int main() {
    int n, contador = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;
    
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) { 
            contador++;
        }
    }

    cout<<"El numero "<<n<<" tiene "<<contador<<" divisores.";

    return 0;
}
