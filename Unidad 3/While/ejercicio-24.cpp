#include <iostream>

using namespace std;

int main() {
    int legajo, codmateria;
    int cpromedio = 0, examenescod10 = 0, menornota, menorlegajo;
    float aprobados = 0, desaprobados = 0;
    int cporcentaje = 0;
    float nota, notatotal = 0;
    bool NotaBool = false;

    cout<<"Ingrese el legajo del estudiante: ";
    cin>>legajo;

    cout<<"Ingrese el codigo de materia: ";
    cin>>codmateria;

    cout<<"Nota: ";
    cin>>nota;

    cout<<endl;

    while (legajo < 30000) {

        cpromedio++;
        notatotal+=nota;
        cporcentaje++;

        if (!NotaBool) {
            menornota = nota;
            menorlegajo = legajo;
            NotaBool = true;
        } else if (nota < menornota) {
            menornota = nota;
            menorlegajo = legajo;
        }

        if (codmateria == 10) {
            examenescod10++;
        }


        if (nota >= 6) {
            aprobados++;
        } else {
            desaprobados++;
        }

            cout<<"Ingrese el legajo del estudiante: ";
            cin>>legajo;

            cout<<"Ingrese el codigo de materia: ";
            cin>>codmateria;

            cout<<"Nota: ";
            cin>>nota;

            cout<<endl;
    }

    notatotal = float(notatotal/cpromedio);
    aprobados = float((aprobados/cporcentaje)*100);
    desaprobados = float((desaprobados/cporcentaje)*100);

    cout<<"Promedio de notas: "<<notatotal<<endl;
    cout<<"Legajo del estudiante con menor nota: "<<menorlegajo<<" nota: "<<menornota<<endl;
    cout<<"Cantidad de examenes rendidos para la materia 10: "<<examenescod10<<endl;
    cout<<"Porcentaje de aprobados "<<aprobados<<"%"<<endl;
    cout<<"Porcentaje de desaprobados "<<desaprobados<<"%"<<endl;

    return 0;
}