//print floyd,s triagle

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 1;

    // outer loop
    for(int i=1; i<=n; i++){
    // inner loop
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;

        }

        cout<<endl;
    }

    return 0;
}