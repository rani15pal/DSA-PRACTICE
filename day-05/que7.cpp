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

// allprimes
void allPrime(int n){
 for(int i=2; i<=n; i++){
    if(isPrime(i)) {             //same as  (isPrime(i) == true)
     cout<<i<<" ";
    }
 }
  cout<<endl;
}

int main() {
   
   allPrime(30);

    return 0;
}