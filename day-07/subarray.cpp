// print elents of sub array 

#include <iostream>
using namespace std;

// print subarray
void printSubarray(int *arr, int n ){
      // outer loop (start)
    for(int start = 0; start<n; start++){

        // innerloop(end)
    for(int end=start; end<n; end++){
     //  cout<<"(" <<start << ", "<<end <<")"  <<endl ;

     //    inner element (start to end )
     for(int i=start; i<=end; i++){
        cout <<arr[i];

     }
     cout<<", ";


    }

    cout<<endl;

    }

}


int main(){

    int arr [] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
     
    printSubarray(arr , n );

    return 0; 


}