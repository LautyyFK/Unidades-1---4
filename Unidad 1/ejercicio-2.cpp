/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, temp;

    cout<<"Primer Numero: ";
    cin>>n1;

    cout<<"Segundo Numero: ";
    cin>>n2;

    temp=n1;

    n1=n2;

    n2=temp;

    cout<<"El Primero Numero que pusiste se Modifico a "<<n1<<endl<<"El Segundo Numero que pusiste se modifico a "<<n2<<endl;
}