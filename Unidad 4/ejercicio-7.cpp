#include <iostream>

using namespace std;

int main() {
    
    int menorNumero, menorNumeroGrupo, menorNumeroPosicion;
    float mayorPromedio, mayorPromedioGrupo;

    bool prPromedio = false;
    bool prMenor = false;

    for (int i = 1; i <= 3; i++) {

        int numero;
        float sumaGrupo = 0;
        float contadorNumerosGrupos = 0;

        cout<<"Ingrese un numero: ";
        cin>>numero;
    
        while (numero != 0) {
            
            contadorNumerosGrupos++;
            sumaGrupo += numero;

            if (!prMenor) {
                menorNumero = numero;
                menorNumeroGrupo = i;
                menorNumeroPosicion = contadorNumerosGrupos;
                prMenor = true;
            } else if (numero < menorNumero) {
                menorNumero = numero;
                menorNumeroGrupo = i;
                menorNumeroPosicion = contadorNumerosGrupos;
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        float promedioGrupo = sumaGrupo / contadorNumerosGrupos;

        if (!prPromedio) {
            mayorPromedio = promedioGrupo;
            mayorPromedioGrupo = i;
            prPromedio = true;
        } else if (promedioGrupo > mayorPromedio) {
            mayorPromedio = promedioGrupo;
            mayorPromedioGrupo = i;
        }

        cout<<endl;
        cout<<"Promedio del Grupo "<<i<<" es "<<promedioGrupo<<endl;
        cout<<endl;
    }

    cout<<"---------------------------------"<<endl;
    cout<<"El menor numero es "<<menorNumero<<endl;
    cout<<"Se encuenta en el grupo "<<menorNumeroGrupo<<endl;
    cout<<"Su posicion dentro del grupo es "<<menorNumeroPosicion<<endl;
    cout<<endl;
    cout<<"El mayor de los promedios es "<<mayorPromedio<<endl;
    cout<<"Pertenece al grupo "<<mayorPromedioGrupo<<endl;

    return 0;
}