#include <iostream>

using namespace std;

int main() {

    int nartista, integrantes, duracionshow;
    int solistasj1 = 0, solistasj2 = 0, solistasj3 = 0;
    int minutosj1 = 0, minutosj2 = 0, minutosj3 = 0, mayorjornada, nrmayorj;
    float cpromedio = 0, mpromedio = 0;
    int jornada;
    int showlargo, arshowlarge;
    bool showBool = false;


    cout<<"Ingrese el numero de artista: ";
    cin>>nartista;

    cout<<"Integrantes: ";
    cin>>integrantes;

    cout<<"Jornada nro (1, 2 o 3): ";
    cin>>jornada;

    cout<<"Duracion del show en minutos: ";
    cin>>duracionshow;  

    cout<<endl;

    while (nartista != 0) {

        switch (jornada) {
        case 1:

            if (!showBool) {
                showlargo = duracionshow;
                arshowlarge = nartista;
                showBool = true;
            } else if (duracionshow > showlargo) {
                showlargo = duracionshow;
                arshowlarge = nartista;
            }

            if (integrantes == 1) { 
                solistasj1++;
            }

            minutosj1 += duracionshow;
            break;

        case 2:

            if (integrantes == 1) { 
                solistasj2++;
            }

            minutosj2 += duracionshow;
            break;

        case 3:

            if (integrantes == 1) { 
                solistasj3++;
            }

            minutosj3 += duracionshow;
            break;
        
        default:
            cout<<"Jornada invalida ingrese nuevamente (1, 2 o 3): "<<endl;
            cin>>jornada;

            break;
        }

        mpromedio += duracionshow;
        cpromedio++;    
        
        cout<<"Ingrese el numero de artista: ";
        cin>>nartista;

        cout<<"Integrantes: ";
        cin>>integrantes;

        cout<<"Jornada nro (1, 2 o 3): ";
        cin>>jornada;

     cout<<"Duracion del show en minutos: ";
        cin>>duracionshow;

        cout<<endl;
    }
    
    
    mayorjornada = minutosj1;
    nrmayorj = 1;

    if (minutosj2 > mayorjornada) {
        mayorjornada = minutosj2;
        nrmayorj = 2;
    }
    if (minutosj3 > mayorjornada) {
        mayorjornada = minutosj3;
        nrmayorj = 3;
    }

    mpromedio = mpromedio/cpromedio;

    cout<<"El nro del artista con el show mas largo de la J1 fue"<<arshowlarge<<" y dura "<<showlargo<<" minutos."<<endl;
    cout<<"Cantidad de solistas en J1: "<<solistasj1<<endl;
    cout<<"Cantidad de solistas en J2: "<<solistasj2<<endl;
    cout<<"Cantidad de solistas en J3: "<<solistasj3<<endl;
    cout<<"La jornada mas extensa fue de la jornada "<<nrmayorj<<" con "<<mayorjornada<<" minutos."<<endl;
    cout<<"Duracion promedio de Show por cada artista es de "<<mpromedio<<" minutos."<<endl;

    return 0;
}