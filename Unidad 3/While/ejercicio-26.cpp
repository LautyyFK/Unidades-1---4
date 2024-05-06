#include <iostream>

using namespace std;

int main() {

    int numero = 15;

    while (numero <= 1000) {
        
        if ((numero % 3 == 0) && (numero % 15 == 0) && (numero % 6 != 0)) {
            cout<<numero<<" ";
        }   

        numero += 15;
    }

    return 0;
}