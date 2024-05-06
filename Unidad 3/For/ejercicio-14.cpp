#include <iostream>

using namespace std;

int main() {
    int n, impar1, impar2, impar3, impar4;
    bool encuentro1 = false, encuentro2 = false;

    for (int i = 0; i < 7; ++i) {
        cout<<"Ingresa un numero: ";
        cin>>n;

        if (n % 2 != 0) {
            if (!encuentro1) {
                impar1 = n;
                encuentro1 = true;
            } else if (!encuentro2) {
                impar2 = n;
                encuentro2 = true;
            }
            impar3 = impar4; 
            impar4 = n;
        }
    }

    cout<<"Primer impar: "<<impar1<<", Segundo impar: "<<impar2<<", Tercer impar: "<<impar3<<" y ultimo impar: "<<impar4;

    return 0;
}
