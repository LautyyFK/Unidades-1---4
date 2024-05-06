#include <iostream>

using namespace std;

int main() {
    int numeromov, dia, importe;
    char tipo;

    int mayorimporte, mayordia, mayormovimiento;
    int deposito = 0, extraccion = 0, total;

    float deposito_cont = 0.0, extraccion_cont = 0.0;
    
    int dia10 = 0;

    for (int i = 1; i<=14; i++) {
        cout<<"Numero de movimiento: ";
        cin>>numeromov;

        cout<<"Dia: ";
        cin>>dia;

        cout<<"Tipo (E - Extraccion / D - Deposito)";
        cin>>tipo;

        cout<<"Importe $";
        cin>>importe;

        cout<<endl;

        switch (tipo){
        case 'E':
            extraccion += importe;
            extraccion_cont++;

            break;
        case 'D':
            deposito += importe;
            deposito_cont++;

            if (i == 1) {
                mayorimporte = importe;
                mayordia = dia;
                mayormovimiento = numeromov;
            } else if (importe > mayorimporte) {
                mayorimporte = importe;
                mayordia = dia;
                mayormovimiento = numeromov;
            }
            break;  
        default:    
            cout<<"Ingreso un tipo incorrecto."<<endl;
            break;
        }

        if (dia == 10) {
            dia10++;
        }
    }

    total = deposito - extraccion;

    extraccion_cont = (extraccion_cont/14.0)*100; 
    deposito_cont = (deposito_cont/14.0)*100; 

    cout<<"El saldo de la cuenta es de $"<<total<<endl;
    cout<<"El porcentaje de extraccion es %"<<extraccion_cont<<", el porcentaje de deposito es %"<<deposito_cont<<endl;
    cout<<"El deposito de mayor importe fue de $"<<mayorimporte<<" el dia "<<mayordia<<" el numero de movimiento es "<<mayormovimiento<<endl;
    
    if (dia10 > 0) {
        cout<<"La cantidad de movimientos del dia 10 fueron: "<<dia10<<endl;
    } else {
        cout<<"No hubieron movimientos en el dia 10."<<endl;
    }

    return 0;
}