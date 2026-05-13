//prime using function 
#include <iostream>
using namespace std;

//
bool isPrime(int n){
    // for 1
    if(n == 1){
        return false;
    }

    //for  rest num 
for(int i =2; i<=n-1; i++){
    if(n%i == 0){ //non-prime
        return false;
    }
}

return true;
}

int main() {

    cout<<isPrime(23)<<endl;
     cout<<isPrime(22)<<endl;
      cout<<isPrime(27)<<endl;

    return 0;
}