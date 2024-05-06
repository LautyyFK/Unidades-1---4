/*
Autor: Lautaro Flor
Fecha de creación: 20/03
*/

#include <iostream>

using namespace std;

int main() {
    int e1, e2, e3, e4;
    int notamas7 = 0, notamas4 = 0;

    cout<<"Nota primer examen: ";
    cin>>e1;

    cout<<"Nota segundo examen: ";
    cin>>e2;

    cout<<"Nota tercer examen: ";
    cin>>e3;

    cout<<"Nota cuarto examen: ";
    cin>>e4;

    if (e1 >= 7) {
        notamas7++;
        notamas4++;
    } else if (e1 >= 4) {
        notamas4++;
    }

    if (e2 >= 7) {
        notamas7++;
        notamas4++;
    } else if (e2 >= 4) {
        notamas4++;
    }

    if (e3 >= 7) {
        notamas7++;
        notamas4++;
    } else if (e3 >= 4) {
        notamas4++;
    }

    if (e4 >= 7) {
        notamas7++;
        notamas4++;
    } else if (e4 >= 4) {
        notamas4++;
    }

    if (notamas7 == 4) {
        cout<<"Promociona."<<endl;
    } else if (notamas4 >= 3) {
        cout<<"Rinde examen final."<<endl;
    } else if (notamas4 == 1) {
        cout<<"Recupera Parciales."<<endl;
    } else {
         cout<<"Recursa la materia."<<endl;
    }

    
     return 0;
}


