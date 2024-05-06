#include <iostream>

using namespace std;

int main() {
    int n;
    bool primo = true;

    cout<<"Ingrese un numero: ";
    cin>>n;
    
    if (n <= 1) {
        primo = false;
    }

    for (int i = 2; i<n; i++) {
        if (n % i == 0) { 
            primo = false;
        }
    }

    if (!primo)  {
        cout<<"No es primo.";
    } else {
        cout<<"Es primo.";
    }
    
    return 0;
}
