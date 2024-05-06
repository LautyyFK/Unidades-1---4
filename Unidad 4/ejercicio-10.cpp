#include <iostream>

using namespace std;

int main() {
    int numero;
    int PrimosConsecutivosGrupo = 0;
    int Grupo = 0;
    int MayorPrimo = 0;
    int PosicionPrimo;
    int PrimoMayorGrupo;
    int NegMax1, NegMax2;
    int NegPos1, NegPos2;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        
        int PrimosConsecutivos = 0;
        bool PrimoCons = false;
        int NumerosContador = 0;
        Grupo++;
        int NumerosNeg = 0;

        while (numero != 0) {

            NumerosContador++;

            bool esPrimo = true;

            if (numero <= 1) {
                esPrimo = false;
            }

            for (int i = 2; i < numero; i++) {
                if (numero % i == 0) {
                    esPrimo = false;
                }
            }

            if (esPrimo) {
                PrimosConsecutivos++;

                if (PrimosConsecutivos == 4) {
                    PrimoCons = true;
                }

                if (numero > MayorPrimo) {
                    MayorPrimo = numero;
                    PosicionPrimo = NumerosContador;
                    PrimoMayorGrupo = Grupo;
                }

            } else {
                PrimosConsecutivos = 0;
            }

            if (numero < 0) {
                NumerosNeg++;

                if (NumerosNeg == 1) {
                    NegPos1 = NumerosContador;
                    NegMax1 = numero;
                    NegMax2 = numero;
                    NegPos2 = NumerosContador;
                } else if (numero > NegMax1) {
                    NegPos2 = NegPos1;
                    NegMax2 = NegMax1;
                    NegMax1 = numero;
                    NegPos1 = NumerosContador;
                } else if ((numero > NegMax2) || (NumerosNeg == 2)) {
                    NegMax2 = numero;
                    NegPos2 = NumerosContador;
                }
            }


            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        if (PrimoCons) {
            PrimosConsecutivosGrupo++;
        }

        if (NumerosNeg == 0) {
            cout<<"No hay numeros negativos."<<endl;
        } else {
            cout<<"Mayor Negativo "<<NegMax1<<" Posicion "<<NegPos1<<endl;
            cout<<"Segundo Mayor Negativo "<<NegMax2<<" Posicion "<<NegPos2<<endl;
        }

        cout<<endl;

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<endl;
    cout<<"El mayor numero primo es "<<MayorPrimo<<endl;
    cout<<"Con posicion "<<PosicionPrimo<<endl;
    cout<<"Pertenece al grupo "<<PrimoMayorGrupo<<endl;

    cout<<"Hay "<<PrimosConsecutivosGrupo<<" grupos con cantidades de primos consecutivos mayores o iguales a 4."<<endl;

    return 0;
}
