#include <iostream> 

using namespace std;

int main() {
    int n, max, pos;
    bool max_1 = true;

    for (int i = 1; i<=10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (max_1) {
            max = n;
            pos = i;
            max_1 = false;
        } else if (n > max) {
            max = n;
            pos = i;
        }
    }

    cout<<"El maximo es "<<max<<" con posicion "<<pos;

    return 0;
}