//star pattern for n=4

#include <iostream>
using namespace std;

int main() {
     int n = 6;

    //  outer loop
    for(int i=1; i<=n; i++){

        // inner loop
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }

        cout<<endl;
    }
    return 0;
}