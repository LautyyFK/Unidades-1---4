/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main() {
    float semana_1, semana_2, semana_3, semana_4, promedio;

    cout<<"Recaudacion primera semana: $";
    cin>>semana_1;

    cout<<"Recaudacion segunnda semana: $";
    cin>>semana_2;

    cout<<"Recaudacion tercera semana: $";
    cin>>semana_3;

    cout<<"Recaudacion cuarta semana: $";
    cin>>semana_4;

    promedio= semana_1 + semana_2 + semana_3 + semana_4;

    semana_1 = (semana_1/promedio)*100;
    semana_2 = (semana_2/promedio)*100;
    semana_3 = (semana_3/promedio)*100;
    semana_4 = (semana_4/promedio)*100;

    promedio=promedio/4;

    cout<<"Promedio de ventas: $"<<promedio<<". Porcentajes de por semana: "<<semana_1<<"%, "<<semana_2<<"%, "<<semana_3<<"%, "<<semana_4<<"%.";

    return 0;
}   