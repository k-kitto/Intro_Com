#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main () {
    string word ;
    cin >> word ;

    bool Upper = false ;
    bool Lower = false ;

    for ( char c : word ) {
        if (isupper(c)) Upper = true ;
        if (islower(c)) Lower = true ;
    }

    if (Upper && Lower) {
        cout << "Mix" ;
    }else if (Upper) {
        cout << "All Capital Letter" ;
    }else if (Lower) {
        cout << "All Small Letter" ;
    }

    return 0 ;
}