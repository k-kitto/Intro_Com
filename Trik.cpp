#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () {
    char t[3] = {1,0,0} ; // 0 1 2
    string s ;
    cin >> s ;

    for(int i=0 ; i<s.length() ; i++ ) {
        if (s[i]=='A') {
            swap(t[0],t[1]) ;
        }else if (s[i]=='B') {
            swap(t[1],t[2]) ;
        }else if (s[i]=='C') {
            swap(t[0],t[2]) ;
        }
    }

    if(t[0]==1){
        cout << '1' ;
    }else if(t[1]==1){
        cout << '2' ;
    }else if(t[2]==1){
        cout << '3' ;
    }

    return 0 ;
}