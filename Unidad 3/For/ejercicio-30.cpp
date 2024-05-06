#include <iostream>

using namespace std;

int main() {
    int num, n1, n2;
    bool primer_primo = false;
    bool ordenado = true;

    for (int i = 1; i <= 7; i++) {
        
        cout<<"Ingrese un numero: ";
        cin>>num;
        cout<<endl;

        bool primo = true;

        if (num <= 1) {
            primo = false;
        }

        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                primo = false;
            }
        }
        
        if (primo) {
            if (!primer_primo) {
                n1 = num;
                primer_primo = true;
            } else {
                n2 = num;

                if (n1>n2) {
                    ordenado = false;
                }
                
                cout<<n1<<":"<<n2<<endl;

                n1 = n2;
            }
        }
    }

    if (ordenado) {
        cout<<"Ordenados."<<endl;
    } else {
        cout<<"Desordenados."<<endl;
    }

    return 0;
}