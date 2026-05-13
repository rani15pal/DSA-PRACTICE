// pattern -->
/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;

int main() {
    int n=3;
    for(int i=1; i<=n; i++){ //num of rows

        // col->or --> each row 
        for(int j=1; j<=n; j++){

        //  print element 
         cout<<i<<" ";

        }

        cout<<endl;

    }
    return 0;
}