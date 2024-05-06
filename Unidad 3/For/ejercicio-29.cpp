#include <iostream>

using namespace std;

int main() {
    int partidonum, minutosjug, tarjetas_a, tarjetas_r, goles;
    int tar_a_total = 0, tar_r_total = 0;
    int nojugados = 0, completos = 0, jugados = 0;
    float tarpromedio = 0.0;

    int maxgoles, maxpartido;
    int golescon = 0, racha = 0;

    for (int i = 1; i<=19; i++) {
        cout<<"Partido numero: ";
        cin>>partidonum;

        cout<<"Minutos jugados: ";
        cin>>minutosjug;

        cout<<"Tarjetas Amarillas: ";
        cin>>tarjetas_a;

        cout<<"Tarjetas Rojas: ";
        cin>>tarjetas_r;

        cout<<"Goles: ";
        cin>>goles;
        
        tar_a_total += tarjetas_a;
        tar_r_total += tarjetas_r;

        if (minutosjug == 0) {
            nojugados++;
        } else if (minutosjug >= 90) {
            completos++;
        }

        if (minutosjug > 0) {
            jugados++;
        }

        if (i == 1) {
            maxgoles = goles;
            maxpartido = i;
        } else if (goles > maxgoles) {
            maxgoles = goles;
            maxpartido = i;
        }
        
        if (goles > 0) {
            golescon++;
            if (golescon > racha) {
                racha = golescon;
            }
        } else {
            golescon = 0;
        }

    }

    tarpromedio = float(tar_a_total + tar_r_total)/jugados;
    
    cout<<"Cantidad de partidos no jugados "<<nojugados<<endl;
    cout<<"Cantidad de partidos jugados por completo "<<completos<<endl;
    cout<<"Promedio de tarjetas recibidas por partido "<<tarpromedio<<endl;
    cout<<"Maradona convirtio mas goles en el partido "<<maxpartido<<" convirtiendo "<<maxgoles<<" goles."<<endl;
    cout<<"La mejor racha de goles consecutivos es de "<<racha<<" partidos"<<endl;

    return 0;
}