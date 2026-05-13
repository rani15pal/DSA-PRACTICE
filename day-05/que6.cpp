// waf to find a binomial coffient:>

#include <iostream>
using namespace std;

// factorial 
int factorial(int n){
   int fact = 1;
   for(int i=1; i<=n; i++){
    fact *= i;  //fact = fact*i
   }

    // cout<<"factorial ("<<n<<") = " <<fact<<endl;
    return fact;
}

// fun for binomial coffient (nCr = n!/r!*(n-r)!)
int binoCoffi(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int  result = val1/(val2*val3);
    return result;
}
 

int main(){
    cout<<binoCoffi(6,3)<<endl; //n=4, r=2
    return 0;

}