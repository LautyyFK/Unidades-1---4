/*
Autor: Lautaro Flor
Fecha de creación: 20/03 
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    
    cout<<"Longitud A: ";
    cin>>n1;
    cout<<"Longitud B: ";
    cin >>n2;
    cout<<"Longitud C: ";
    cin>>n3;
    
    if (n1 == n2 && n2 == n3) { 
     cout<<"Es un triangulo Equilatero."<<endl;

    } else if (n1 != n2 && n2 != n3 && n1 != n3) {
     cout<<"Es un triangulo Escaleno."<<endl;

    } else {
     cout<<"Es un triangulo Isosceles."<<endl;
     
    }
    
    return 0;
}

