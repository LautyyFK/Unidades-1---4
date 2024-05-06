#include <iostream>

using namespace std;

int main() {
    int n;
    int pos = 0, neg = 0, cero = 0;

    for (int i = 1; i<=10; i++) {

        cout<<"Ingrese un numero: ";
        cin>>n;

        if (n > 0) {
            pos++;
        } else if (n < 0) {
            neg++;
        } else {
            cero++;
        }
    }
    
    float pos_p = (pos/10.0)*100;
    float neg_p = (neg/10.0)*100;
    float cero_p = (cero/10.0)*100;

    cout<<"Hay "<<pos_p<<"% Numeros Positivos, "<<neg_p<<"% Numeros Negativos y "<<cero_p<<"% Ceros.";

    return 0;
}