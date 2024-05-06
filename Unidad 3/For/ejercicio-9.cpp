#include <iostream> 

using namespace std;

int main() {
    int n, max;
    bool max_1 = true;

    for (int i = 1; i<=10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (max_1) {
            max = n;
            max_1 = false;
        } else if (n > max) {
            max = n;
        }
    }

    cout<<"El maximo es "<<max;

    return 0;
}