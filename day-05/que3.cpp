//butterfly patern
#include <iostream>
using namespace std;

int main(){
    int n=4;

    // <---------------UPPER HALF-1-------------------------->
    // outer loop
    for(int i=1; i<=n; i++){


    // inner loop ((*))
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
    // inner loop (( space ))
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
    // inner loop ((*))
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    // <---------------BOTTOM HALF-1-------------------------->
    // outer loop
    for(int i=n; i>=1; i--){

        
    // inner loop ((*))
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
    // inner loop (( space ))
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
    // inner loop ((*))
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}