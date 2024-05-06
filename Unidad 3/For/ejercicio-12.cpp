#include <iostream> 

using namespace std;

int main() {
    int n, min_p, max_n;
    bool min_p1 = true;
    bool max_n1 = true;

    for (int i = 1; i<=10; i++) {
        cout<<"Ingrese un numero: ";
        cin>>n;

        if (n > 0) {
            if (min_p1) {
                min_p = n;
                min_p1 = false;
            } else if (min_p > n) {
                min_p = n;
            } 
            
        } else if (n < 0) {
             if (max_n1) {
                max_n = n;
                max_n1 = false;
            } else if (max_n < n) {
                max_n = n;
            } 
        } 
    }

    cout<<"El maximo es de los negativos es "<<max_n<<", el minimo de los positivos es "<<min_p;

    return 0;
}