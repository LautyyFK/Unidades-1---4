#include <iostream>

using namespace std;

int main() {
    int num, n1, n2;
    bool numero1 = true;
    bool alternado = true;
    for (int i = 1; i <= 10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if (numero1) {
            n1 = num;
            numero1 = false;
        } else {
            n2 = num;

            if ((n1 % 2 == 0 && n2 % 2 == 0) || (n1 % 2 != 0 && n2 % 2 != 0))  {
                alternado = false;
            }

            n1 = n2;
        }
    }

    if (alternado) {
        cout<<"Alternados."<<endl;
    } else {
        cout<<"No alternados."<<endl;
    }

    return 0;
}