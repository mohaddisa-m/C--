#include <iostream>
using namespace std;
int main(){
    unsigned long number = 600851475143;
    unsigned long product = 1;
    for (int i = 1; i < 10000; i++) {
        if (number%i==0) {
            product *= i;
            cout << i << endl;
        }
        if (product>number){
            break;
        }
    }
    return 0;
}
