#include <iostream>
using namespace std ;

int main () {
    
    int n , i , First_Num ;
    cin >> n >> First_Num ;
    int Max = First_Num , Min = First_Num ;
    
    for(i=1 ; i<= (n-1) ; i++ ) {
        int x ;
        cin >> x ;
        
        if (x>Max) {
            Max = x ;
        }else if (x<Min) {
            Min = x ;
        }
    }
    
    cout << "Max: " << Max << '\n' << "Min: " << Min ;
    
    return 0;
}
