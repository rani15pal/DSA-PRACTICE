//print diamond pattern::

/*trick--> break it into to pyramid
now reverse 2 pyramid*/

#include <iostream>
using namespace std;

int main(){
    int n = 5;
   
// <---------------PYRAMID-1-------------------------->
    // outer loop
    for(int i=1; i<=n; i++){
    // inner loop ((space))
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        
        }
    // inner loop (( * ))
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // <---------------PYRAMID-2-------------------------->
    // outer loop
    for(int i=n; i>=1; i--){
    // inner loop ((space))
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        
        }
    // inner loop (( * ))
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}