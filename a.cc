#include <iostream>
using namespace std;

//enter number1: ___
//enter number2: ___
//the quoutient is: __
//the remainder is: __

int main() {    
    int number1, number2, quotient, remainder;
    cout<<"Enter Number1: ";
    cin>> number1;
    cout << "Enter number2: ";
    cin>> number2;
    quotient = number1 / number2;
    remainder = number1 % number2;
    cout<<"The qoutient is: " << quotient<<endl ;
    cout<< "The remainder is: " << remainder << endl; 
    
    cout << endl << endl;
    return 0 ;
}