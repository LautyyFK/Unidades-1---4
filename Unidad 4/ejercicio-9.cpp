#include <iostream>

using namespace std;

int main() {

    int peso;
    int pesoTotal;
    int encomiendas = 0;
    int Grupo = 1;
    int pesoCamion = 0;
    bool prCamion = false;
    int mayorEncomienda, mayorEncomiendaCamion;
    cout<<"Ingrese un peso: ";
    cin>>peso;

  
    while (peso >= 0) {
        
        encomiendas++;

        pesoTotal += peso;

        if (pesoTotal > 200) {
            encomiendas--;

            pesoCamion = pesoTotal - peso;

            cout<<"-----------"<<endl;
            cout<<"Camion "<<Grupo<<" peso total "<<pesoCamion<<" Encomiendas "<<encomiendas<<endl;
            cout<<"-----------"<<endl;


            if (!prCamion) {
                mayorEncomienda = encomiendas;
                mayorEncomiendaCamion = Grupo;
                prCamion = true;
            } else if (encomiendas > mayorEncomienda) {
                mayorEncomienda = encomiendas;
                mayorEncomiendaCamion = Grupo;
            }
        
            pesoTotal -= pesoCamion;
            Grupo++;
            encomiendas = 1;
        }
        
        cout<<"Ingrese un peso: ";
        cin>>peso;
    }

        cout<<endl;
        cout<<"La mayor encomienda fue del camion "<<mayorEncomiendaCamion<<" con "<<mayorEncomienda<<" encomiendas."<<endl;

        return 0;
}

