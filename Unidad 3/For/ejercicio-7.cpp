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

    cout<<"Hay "<<pos<<" Numeros Positivos, "<<neg<<" Numeros Negativos y "<<cero<<" Ceros.";

    return 0;
}