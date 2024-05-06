#include <iostream>

using namespace std;

int main() {
    int num, numNeg;
    int ternaPos = 0, consecutivosPos = 0;
    int ternaNeg = 0, consecutivosNeg = 0, NegCrecimiento = 0;

    for (int i = 1; i <=13; i++) {
        cout<<"Ingrese un numero: ";
        cin>>num;

        if (num > 0) {
            consecutivosNeg = 0;
            consecutivosPos++;

            if (consecutivosPos == 3) {
                ternaPos++;
                consecutivosPos = 0;
            }

        } else if (num < 0) {
            consecutivosPos = 0;
            consecutivosNeg++;

            if (consecutivosNeg == 1) {
                numNeg = num;
                NegCrecimiento++;

            } else {

                if (num > numNeg) {
                    NegCrecimiento++;
                    numNeg = num;
                } else {
                    NegCrecimiento = 1;
                    numNeg = num;
                }

            }

            if (NegCrecimiento == 3) {
                ternaNeg++;
                NegCrecimiento = 0;
                consecutivosNeg = 0;
            }

        } else {
            consecutivosNeg = 0;
            consecutivosPos = 0;

        }   

    }

    cout<<"Terna de valores positivos consecutivos: "<<ternaPos<<endl;
    cout<<"Terna de valores negativos consecutivos y ordenados: "<<ternaNeg<<endl;

    return 0;
}