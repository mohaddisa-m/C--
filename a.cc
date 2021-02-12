#include <iostream>
using namespace std;
int main(){
    int fwd, bwd;
    bool prime = false;
    int count=0;
    for (int fwd = 2; fwd <= 110000; fwd++)
    {
        for (int bwd = (fwd-1); bwd > 0; bwd--)
        {
            if (fwd%bwd == 0 && bwd !=1){
                prime = false;
                break;
            }
            if (fwd%bwd == 0 && bwd == 1){
                prime = true;
            }
        }
        if (prime == true){
            count +=1;
            cout << fwd << " is "<< count<< " prime" << endl;
        }
        
        
    }
    
    
    return 0;
}
