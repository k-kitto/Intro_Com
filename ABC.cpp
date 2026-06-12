#include <iostream>
#include <algorithm>
#include <string>
using namespace std ;

int main () {
    int abc;
    int n[3] ;
    for (int i=0 ; i<3 ; i++ ) {
        cin >> n[i] ;
    }

    string str ;
    cin >> str ;

    sort(n,n+3) ;

    for(int i=0 ; i<3 ; i++ ) {
        cout << n[str[i] - 'A'] << " " ;
    }

    return 0 ;
}