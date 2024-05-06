#include <iostream>

using namespace std;

int main() {
    int dia, diatemp;
    float temperatura, lluvia, km, tempmax, tempmin, amplitud;
    int neblina = 0, conlluvia = 0, sinlluvia = 0;

    for (int i = 1; i<=15; i++) {
        cout<<"Dia numero: ";
        cin>>dia;

        cout<<"Temperatura del dia: ";
        cin>>temperatura;

        cout<<"Milimetros de lluvia: ";
        cin>>lluvia;

        cout<<"Visibilidad en km: ";
        cin>>km;
        cout<<endl;

        if (i == 1) {
            tempmax = temperatura;
            diatemp = dia;
            tempmin = temperatura;
        } else if (temperatura > tempmax) {
            tempmax = temperatura;
            diatemp = dia;
        } else if (temperatura < tempmin) {
            tempmin = temperatura;
        }

        if (km < 2) {
            neblina++;
        }

        if (lluvia > 0) {
            conlluvia++;
        } else {
            sinlluvia++;
        }

    }
    
    amplitud = tempmax - tempmin;

    cout<<"El dia "<<diatemp<<" se registro la temperatura maxima."<<endl;
    cout<<"La amplitud termica de todo el periodo fue de "<<amplitud<<endl;
    cout<<"La cantidad de dias con neblina fue de "<<neblina<<endl;
    
    if (conlluvia>sinlluvia) {
        cout<<"Quincena lluviosa"<<endl;
    } 

    if (conlluvia>=5) {
        cout<<"Quincena humeda"<<endl;
    } else {
        cout<<"Quincena seca"<<endl;
    }
}