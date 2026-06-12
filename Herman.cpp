#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

int main () {
    const double pi = acos(-1.0) ;
    double r ;
    cin >> r ;

    cout << fixed << setprecision(6) ;
    cout << pi * r*r << '\n' ;
    cout << 2 * r*r ;

}
