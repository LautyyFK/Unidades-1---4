#include <iostream>

using namespace std;

int main() {
    int num, prMayor, sgMayor;
    bool primerNum = false;

    for (int i = 1; i <= 10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if (!primerNum) {
            prMayor = num;
            primerNum = true;
        } else if (num > prMayor) {
            sgMayor = prMayor;
            prMayor = num;
        } else if (i == 2 && num != prMayor) {
            sgMayor = num;  
        } else if (num > sgMayor && num != prMayor) {
            sgMayor = num;
        }
    }

    cout<<"Primer mayor: "<<prMayor<<" y segundo mayor: "<<sgMayor<<endl;

    return 0;
}