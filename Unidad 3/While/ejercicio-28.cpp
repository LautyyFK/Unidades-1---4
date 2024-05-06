#include <iostream>

using namespace std;

int main() {
    float metros, conversion;
    int opcion;


    cout<<"Menu principal"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1 - Ingresar medida en metros"<<endl;
    cout<<"2 - Convertir a centimetros"<<endl;
    cout<<"3 - Convertir a kilometros"<<endl;
    cout<<"4 - Convertir a pulgadas"<<endl;
    cout<<"5 - Convertir a pies"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"0 - Salir del programa"<<endl;

    cout<<endl;

    cout<<"Ingrese opcion: ";
    cin>>opcion;


    while (opcion != 0) {

        switch (opcion) {
            case 1:
                cout<<"Ingrese medida en metros: ";
                cin>>metros;
                break;
            case 2:
                conversion = metros * 100;

                cout<<"Los "<<metros<<" mts son "<<conversion<<" cms."<<endl;
                break;
            case 3:
                conversion = metros / 1000.0;
                
                cout<<"Los "<<metros<<" mts son "<<conversion<<" kilometross."<<endl;
                break;
            case 4:
                conversion = metros * 39.3701;
                
                cout<<"Los "<<metros<<" mts son "<<conversion<<" pulgadas."<<endl;
                break;
            case 5:
                conversion = metros *  3.28084;
                
                cout<<"Los "<<metros<<" mts son "<<conversion<<" pies."<<endl;
                break;
            default:
                	cout<<"Opcion Invalida. ";
                break;
        }

            cout<<"Ingrese opcion: ";
            cin>>opcion;
            cout<<endl;
    }   

    cout<<"Programa Finalizado."<<endl;

    return 0;
}