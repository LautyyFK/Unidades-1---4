/*
Autor: Lautaro Flor
Fecha de creación: 19/03 
*/

#include <iostream>

using namespace std;

int main () {

int horastrabajadas, valorporahora, sueldo;

cout<<"Ingrese la cantidad de horas trabajadas ";
cin>>horastrabajadas;

cout<<"Ingrese el valor a pagar por hora:  $";
cin>>valorporahora;

sueldo = horastrabajadas * valorporahora;

cout<<"Sueldo Correspondiente: "<<"$"<<sueldo<<endl;

return 0;
}
