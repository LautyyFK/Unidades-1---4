#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;

    int menor = (n1<n2) ? n1 : n2;
    int mayor = (n1>n2) ? n1 : n2;

    for (int i = menor + 1; i<mayor; ++i) {
        cout<<i<<endl;
    }

    return 0;
}
