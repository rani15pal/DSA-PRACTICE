// WAP to find the Factorial of a number entered by the user

#include <iostream>
using namespace std;

int main() {

    int n , fact = 1 ;

    cin>>n;

    // logic n!=n*n-1*n-2*.......n
    for(int i=1; i<=n; i++){
      fact *= i; // fact = fact*i;
    }

    cout<<fact;

    return 0;
}