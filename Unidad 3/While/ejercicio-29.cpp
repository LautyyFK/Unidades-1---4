#include <iostream>

using namespace std;

int main() {
    int nrocliente, loc_cliente, kv_consumo;
    bool loc1 = false, loc2 = false, loc3 = false;
    int max_loc1, max_loc2, max_loc3;
    int max_loc1_nro_cl, max_loc2_nro_cl, max_loc3_nro_cl;
    int recaudacion_loc1 = 0, recaudacion_loc2 = 0, recaudacion_loc3 = 0;
    int menorconsumo_kv, menorconsumo_nro;
    bool menorconsumo = false;

    cout<<"Ingrese el numero de cliente: ";
    cin>>nrocliente;

    cout<<"Ingrese la localidad del cliente: ";
    cin>>loc_cliente;

    cout<<"Ingrese los kilovatios consumidos: ";
    cin>>kv_consumo;

    cout<<endl;

    while (nrocliente != 0) {
        
        int recaudacion = 0;

        if (kv_consumo <= 100) {
            recaudacion = 100 + kv_consumo * 10;
        } else if (kv_consumo <= 200) {
            recaudacion = 1100 + (kv_consumo - 100) * 12;
        } else if (kv_consumo > 200) {
            recaudacion = 2300 + (kv_consumo - 200) * 15;
        }

        switch (loc_cliente) {
            case 1:
                if (!loc1) {
                    max_loc1 = kv_consumo;
                    max_loc1_nro_cl = nrocliente;
                    loc1 = true;
                } else if (kv_consumo > max_loc1) {
                    max_loc1 = kv_consumo;
                    max_loc1_nro_cl = nrocliente;
                }

                recaudacion_loc1 += recaudacion;
                break;

            case 2:
                if (!loc2) {
                    max_loc2 = kv_consumo;
                    max_loc2_nro_cl = nrocliente;
                    loc2 = true;
                } else if (kv_consumo > max_loc2) {
                    max_loc2 = kv_consumo;
                    max_loc2_nro_cl = nrocliente;
                }

                recaudacion_loc2 += recaudacion;
                break;

            case 3:
                if (!loc3) {
                    max_loc3 = kv_consumo;
                    max_loc3_nro_cl = nrocliente;
                    loc3 = true;
                } else if (kv_consumo > max_loc3) {
                    max_loc3 = kv_consumo;
                    max_loc3_nro_cl = nrocliente;
                }
                recaudacion_loc3 += recaudacion;
                break;

            default:
                cout<<"Localidad Invalida."<<endl;
                break;
        }

        if (kv_consumo > 0) {
            if (!menorconsumo) {
                menorconsumo_kv = kv_consumo;
                menorconsumo_nro = nrocliente;
                menorconsumo = true;
            } else if (kv_consumo < menorconsumo) {
                menorconsumo_kv = kv_consumo;
                menorconsumo_nro = nrocliente;
            }
        }

        cout<<"Ingrese el numero de cliente: ";
        cin>>nrocliente;

        cout<<"Ingrese la localidad del cliente: ";
        cin>>loc_cliente;

        cout<<"Ingrese los kilovatios consumidos: ";
        cin>>kv_consumo;

        cout<<endl;
    }
    // Mayores Consumos por Localidad.
    if (!loc1) {
        cout<<"La localidad 1 no tuvo un consumo registrado."<<endl;
    } else {
        cout<<"El cliente con mayor consumo de la localidad 1 fue "<<max_loc1_nro_cl<<" con "<<max_loc1<<" kvs"<<endl;
    }

    if (!loc2) {
        cout<<"La localidad 2 no tuvo un consumo registrado."<<endl;
    } else {
        cout<<"El cliente con mayor consumo de la localidad 2 fue "<<max_loc2_nro_cl<<" con "<<max_loc2<<" kvs"<<endl;
    }

    if (!loc3) {
        cout<<"La localidad 1 no tuvo un consumo registrado."<<endl;
    } else {
        cout<<"El cliente con mayor consumo de la localidad 3 fue "<<max_loc3_nro_cl<<" con "<<max_loc3<<" kvs"<<endl;
    }

    cout<<endl;

    // Total de Recaudacion por Localidad.
    if (recaudacion_loc1 == 0) {
        cout<<"La localidad 1 no tiene ninguna recaudacion registrada."<<endl;
    } else {
        cout<<"La localidad 1 tuvo una recaudacion de $"<<recaudacion_loc1<<endl;
    }

    if (recaudacion_loc2 == 0) {
        cout<<"La localidad 2 no tiene ninguna recaudacion registrada."<<endl;
    } else {
        cout<<"La localidad 2 tuvo una recaudacion de $"<<recaudacion_loc2<<endl;
    }

    if (recaudacion_loc3 == 0) {
        cout<<"La localidad 3 no tiene ninguna recaudacion registrada."<<endl;
    } else {
        cout<<"La localidad 3 tuvo una recaudacion de $"<<recaudacion_loc3<<endl;
    }

    cout<<endl;

    cout<<"El nro del cliente que tuvo la menor cantidad de kvs consumidos fue "<<menorconsumo_nro<<" con "<<menorconsumo_kv<<endl;

    return 0;
}