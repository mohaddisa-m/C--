#include <iostream>
using namespace std;

//i%3
//i%3 ==0 && i%5==0
int main() {   
   int n; 
    cout << "enter a  integer : ";
    cin >> n; 
    for (int i = 1; i <= 20 ; ++i ){
        cout << n << "*"<< i << "=" << n * i << endl;  
    }
    return 0 ;

}