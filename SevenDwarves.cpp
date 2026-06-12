#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int sum=0 ;
    int a[9] ;

    for (int i=0;i<9;i++){
        cin >> a[i] ; sum += a[i] ;
    }

    int Stranger = sum - 100 ; //Strangerคือคนแคระตัวปลอม

    for(int i=0 ; i<9 ;i++) {
        for(int j=i+1 ; j<9 ; j++){
            if(a[i]+a[j]==Stranger) {
                for(int k=0 ; k<9 ; k++){
                    if (k!=i && k!=j){
                        cout << a[k] << '\n' ;
                    }
                }
            }
        }
    }

    return 0 ;
}