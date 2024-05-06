#include <iostream> 

using namespace std;

int main() {
    for (int i = 2; i<=10000; i++) {

        bool primo = true;
        
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = false;
            }
        }
        
        if (primo) {
            cout<<i<<" ";
        }
    }

    return 0;
}