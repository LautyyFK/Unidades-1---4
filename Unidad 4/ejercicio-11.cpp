#include <iostream>

using namespace std;

int main() {
    int numero;
    int PerfConsGrupo = 0;
    int GruposAlternados = 0;

    for (int i = 1; i <= 10; i++) {
        int NumeroAnt;
        int MaxPar, MinPar;
        bool prNum = false; 
        int perfectoCons = 0;
        bool PerfConsecutivo = false;
        bool Alternado = true;
        cout<<"Ingrese un numero: ";
        cin>>numero;

        while (numero != 0) {
            NumeroAnt = numero;

            if (numero % 2 == 0) {
                if (!prNum) {
                    MaxPar = numero;
                    MinPar = numero;
                    prNum = true;
                } else if (numero > MaxPar) {
                    MaxPar = numero;
                } else if (numero < MinPar) {
                    MinPar = numero;
                }
            }

            int sumaPerfecto = 0;

            if (numero > 0) {
                for (int j = 1; j < numero; j++) {
                    if (numero % j == 0) {
                        sumaPerfecto += j;
                    }
                }

                if (numero == sumaPerfecto) {
                    perfectoCons++;

                    if (perfectoCons == 2) {
                        PerfConsecutivo = true;
                    }
                } else {
                    perfectoCons = 0;
                }
            } else {
                perfectoCons = 0;
            }



            cout<<"Ingrese un numero: ";
            cin>>numero;

            if (((numero > 0) && (NumeroAnt > 0)) || ((numero < 0) && (NumeroAnt < 0))) {
                Alternado = false;
            }
            
        }
        
        if (PerfConsecutivo) {
            PerfConsGrupo++;
        }

        if (Alternado) {
            GruposAlternados++;
        }

        cout<<endl;
        cout<<"----> Grupo "<<i<<" <----"<<endl;
        cout<<"El maximo de los pares es "<<MaxPar<<endl;
        cout<<"El minimo de los impares es "<<MinPar<<endl;
        cout<<endl;
    }

    cout<<"Hay "<<PerfConsGrupo<<" grupos con 2 numeros perfectos consecutivos."<<endl;
    cout<<"Hay "<<GruposAlternados<<" grupos con numeros alternados positivos y negativos."<<endl;

    return 0;
}