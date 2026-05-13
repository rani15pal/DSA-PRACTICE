

// character pyramid pattern

#include <iostream>
using namespace std;

int main() {
     int n = 5;
     char ch = 'A' ;

    //  outer loop
    for(int i=1; i<=n; i++){

        // inner loop
        for(int j=1; j<=i; j++){
            cout<<ch<<" " ;
            ch++;
        }

        cout<<endl;
    }
    return 0;
}