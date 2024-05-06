#include <iostream>

using namespace std;

int main() {
    int n, suma = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;
 
    for (int i = 1; i<n; i++) {
        if (n % i == 0) { 
            cout<<i<<" ";
            suma += i;
        }
    }

    if (suma == n) {
        cout<<endl<<n<<" Es un numero perfecto, ya que su suma da "<<suma;
    } else {
        cout<<endl<<n<<" No un numero perfecto, ya que su suma da "<<suma;
    }
    return 0;
}
