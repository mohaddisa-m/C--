#include <iostream>
using namespace std;

// 3 inpits
// smaller, larger 


int main() {
    int x, y , z ;
    cout << "Enter three numbers : ";
    cin >> x >> y >> z ; 
    if (x > y)
        swap (x, y); 
    if (y > z)
        swap (y,z);   
    if (y > x)
        swap (y,x);  
    if (x > z)
        swap (x , z);  
    cout << y << ", " << x << ' ' << z <<  endl ;
    return 0 ;
}
