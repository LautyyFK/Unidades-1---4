#include <iostream>

using namespace std;

int main() {
    int nrocliente, nrosucursal, saldocliente;
    float suc1_saldo20k = 0, suc2_saldo20k = 0, suc3_saldo20k = 0, suc4_saldo20k = 0, general_saldo20k = 0;
    int saldo20kmax, saldo20kmax_suc;
    bool saldomax = false;
    int saldomax_nro, saldomax_saldo, saldomax_sucursal;
    int suc1_total = 0, suc2_total = 0, suc3_total = 0, suc4_total = 0;

    cout<<"Ingrese el numero de cliente: ";
    cin>>nrocliente;

    cout<<"Ingrese el numero de sucursal (1, 2, 3 o 4): ";
    cin>>nrosucursal;

    cout<<"Ingrese el saldo del cliente $";
    cin>>saldocliente;

    cout<<endl;

    while (nrosucursal != 10) {

        switch (nrosucursal) {
            case 1:
                if (saldocliente > 20000) {
                    suc1_saldo20k++;
                }

                suc1_total += saldocliente;
                break;
            case 2:
                if (saldocliente > 20000) {
                    suc2_saldo20k++;
                }

                suc2_total += saldocliente;
                break;
            case 3:
                if (saldocliente > 20000) {
                    suc3_saldo20k++;
                }

                suc3_total += saldocliente;
                break;
            case 4:
                if (saldocliente > 20000) {
                    suc4_saldo20k++;
                }

                suc4_total += saldocliente;
                break;
            default:
                break;
        }
        
        if (saldocliente > 20000) {
            general_saldo20k++;
        }

        if (!saldomax) {
            saldomax_saldo = saldocliente;
            saldomax_nro = nrocliente;
            saldomax_sucursal = nrosucursal;
            saldomax = true;
        } else if (saldocliente > saldomax_saldo) {
            saldomax_saldo = saldocliente;
            saldomax_nro = nrocliente;
            saldomax_sucursal = nrosucursal;
        }

        cout<<"Ingrese el numero de cliente: ";
        cin>>nrocliente;

        cout<<"Ingrese el numero de sucursal (1, 2, 3 o 4): ";
        cin>>nrosucursal;

        cout<<"Ingrese el saldo del cliente $";
        cin>>saldocliente;

        cout<<endl;
    }


    suc1_saldo20k = suc1_saldo20k / general_saldo20k * 100;
    suc2_saldo20k = suc2_saldo20k / general_saldo20k * 100;
    suc3_saldo20k = suc3_saldo20k / general_saldo20k * 100;
    suc4_saldo20k = suc4_saldo20k / general_saldo20k * 100;

    saldo20kmax = suc1_saldo20k;
    saldo20kmax_suc = 1;

    if (suc2_saldo20k > saldo20kmax) {
        saldo20kmax = suc2_saldo20k;
        saldo20kmax_suc = 2;
    } 
    if (suc3_saldo20k > saldo20kmax) {
        saldo20kmax = suc3_saldo20k;
        saldo20kmax_suc = 3;
    } 
    if (suc4_saldo20k > saldo20kmax) {
        saldo20kmax = suc4_saldo20k;
        saldo20kmax_suc = 4;
    } 

    cout<<"La sucursal con  mayor porcentaje de clientes con saldo superior a $20.000 es la sucursal nro "<<saldo20kmax_suc<<" con "<<saldo20kmax<<"%"<<endl;
    cout<<endl;
    cout<<"El nro de cliente con mayor saldo es el cliente nro "<<saldomax_nro<<" con $"<<saldomax_saldo<<endl;
    cout<<"Pertenece a la sucursal nro "<<saldomax_sucursal<<endl;
    cout<<endl;
    cout<<"La surcursal nro 1 tiene un saldo total de $"<<suc1_total<<endl;
    cout<<"La surcursal nro 2 tiene un saldo total de $"<<suc2_total<<endl;
    cout<<"La surcursal nro 3 tiene un saldo total de $"<<suc3_total<<endl;
    cout<<"La surcursal nro 4 tiene un saldo total de $"<<suc4_total<<endl;

    return 0;
}