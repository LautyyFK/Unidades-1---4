/*
Autor: Lautaro Flor
Fecha de creación: 07/04
*/

#include <iostream>

using namespace std;

int main() {
    int edad, personas_m30 = 0, c_personas_17_18 = 0, personas_edad_20_30_40 = 0;
    int contador_p = 0;
    float altura, promedio_m30 = 0;

    cout<<"Ingrese la edad de la persona 1: ";
    cin>>edad;
    cout<<"Ingrese la altura (en metros) de la persona 1: ";
    cin>>altura;

    if (edad > 30 && altura > 1.8) {
        personas_m30++;
    }
    if (edad > 30) {
        promedio_m30 += altura;
        contador_p++;
    }

    if (altura >= 1.7 && altura <= 1.8) {
        c_personas_17_18++;
    }

    if (edad == 20 || edad == 30 || edad == 40 ) {
        personas_edad_20_30_40++;
    }

    cout<<"Ingrese la edad de la persona 2: ";
    cin>>edad;
    cout<<"Ingrese la altura (en metros) de la persona 2: ";
    cin>>altura;

    if (edad > 30 && altura > 1.8) {
        personas_m30++;
    }
    if (edad > 30) {
        promedio_m30 += altura;
        contador_p++;
    }

    if (altura >= 1.7 && altura <= 1.8) {
        c_personas_17_18++;
    }

    if (edad == 20 || edad == 30 || edad == 40 ) {
        personas_edad_20_30_40++;
    }

    cout<<"Ingrese la edad de la persona 3: ";
    cin>>edad;
    cout<<"Ingrese la altura (en metros) de la persona 3: ";
    cin>>altura;

    if (edad > 30 && altura > 1.8) {
        personas_m30++;
    }
    if (edad > 30) {
        promedio_m30 += altura;
        contador_p++;
    }

    if (altura >= 1.7 && altura <= 1.8) {
        c_personas_17_18++;
    }

    if (edad == 20 || edad == 30 || edad == 40 ) {
        personas_edad_20_30_40++;
    }

    cout<<"Ingrese la edad de la persona 4: ";
    cin>>edad;
    cout<<"Ingrese la altura (en metros) de la persona 4: ";
    cin>>altura;

    if (edad > 30 && altura > 1.8) {
        personas_m30++;
    }
    if (edad > 30) {
        promedio_m30 += altura;
        contador_p++;
    }

    if (altura >= 1.7 && altura <= 1.8) {
        c_personas_17_18++;
    }

    if (edad == 20 || edad == 30 || edad == 40 ) {
        personas_edad_20_30_40++;
    }

    cout<<"Ingrese la edad de la persona 4: ";
    cin>>edad;
    cout<<"Ingrese la altura (en metros) de la persona 4: ";
    cin>>altura;

    if (edad > 30 && altura > 1.8) {
        personas_m30++;
    }
    if (edad > 30) {
        promedio_m30 += altura;
        contador_p++;
    }

    if (altura >= 1.7 && altura <= 1.8) {
        c_personas_17_18++;
    }

    if (edad == 20 || edad == 30 || edad == 40 ) {
        personas_edad_20_30_40++;
    }

    cout<<"Cantidad de Personas Mayores a 30 que miden mas de 1.8 metros: "<<personas_m30<<endl;

    if (contador_p > 0 ) {
        promedio_m30 = promedio_m30/contador_p;

        cout<<"Promedio de altura de las personas mayores a 30: "<<promedio_m30<<endl;
    }

    cout<<"Cantidad de Personas con altura entre 1.7 y 1.8: "<<c_personas_17_18<<endl;

    cout<<"Cantidad de Personas cuya edad es 20, 30 o 40: "<<personas_edad_20_30_40<<endl;
}