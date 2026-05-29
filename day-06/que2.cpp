//  input in array 
#include <iostream>
using namespace std;

int main() {
    // int arr[] = {7,4,5,6,3};
    int n ;
    cout<<" enter the size of array : ";
    cin>>n;
    
    int arr[5];
    // int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
 }
