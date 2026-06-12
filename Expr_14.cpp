#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

int main () {
    int year_BE , year_AD ;
    cin>>year_BE ;
    year_AD = year_BE-543 ;

    string year_AD_str = to_string(year_AD) ;
    string y_str = year_AD_str.substr(2,2) ;
    int y = stoi(y_str) ;

    int day = (y + y/4 + 11)%7 ;

    cout<< day ;


    return 0 ;
}