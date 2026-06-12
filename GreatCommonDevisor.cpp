#include <iostream>
#include <cmath>
using namespace std ;

int main () {
    int a , b ;
    cin >> a >> b ;
    int m = min(a,b) ;
    int g ;

    if(a==0 && b==0) {       //a=b=0
        cout << "none" ;
    } 

    else if(a==0 || b==0){
        g = a+b ;
        cout << g ;
    }
    
    else {
        for(int i=1 ; i<=m ; i++) {
            if(a%i==0 && b%i==0){
                g =i ;
            }
        }
        cout << g ;
    }
    

    return 0 ;
}