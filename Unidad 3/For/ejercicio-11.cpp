#include <iostream> 

using namespace std;

int main() {
    int n, max, min;
    bool num1 = true;

    for (int i = 1; i<=5; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (num1) {
            max = n;
            min = n;
            num1 = false;
        } else if (n > max) {
            max = n;
        } else if (n < min) {
            min = n;
        }
    }

    cout<<"El maximo es "<<max<<", el minimo es "<<min;

    return 0;
}