// num is .. " PRIME "
#include <iostream>
using namespace std;

int main(){
    int n;
     cout<<"enter n : ";
     cin>>n;

    bool isPrime = true;

    for (int i=2; i<=n-1; i++) {
        if(n % i == 0) { //n is factor of n ; n completly divide by n ; n-non prime
         isPrime = false;
         break;

        }


    }
   
    if(isPrime){
        cout<<" number is PRIME"<<endl;

    }
    else{
         cout<<" number is NOT PRIME"<<endl;
    }

    return 0;

}
