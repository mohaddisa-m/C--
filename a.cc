#include <iostream>
using namespace std;

//i%3
//i%3 ==0 && i%5==0
int main() {   
   int i; 
    cout << " enter your number ";   
    cin >> i;
    if( i%3 ==0 && i%5 ==0) {
       cout << "divisible by both" << endl;  
    }
     else if (i%3==0){
        cout << "number is divisible by three" << endl;
    } 
      else if (i%5==0) {
        cout << "Number is divisible by 5";
    } 
    else {
        cout << "not divisible by 3 or 5 " << endl; 
    }
    cout << endl << endl;
    return 0 ;
}