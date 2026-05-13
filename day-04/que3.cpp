

// inverted star pattern for n=4

#include <iostream>
using namespace std;

int main() {
     int n = 5;

    //  outer loop
    for(int i=1; i<=n; i++){

        // inner loop
        for(int j=n; j>=i; j--){
            cout<<" * ";
        }

        cout<<endl;
    }
    return 0;
}