//Araay (linear traverse)

// search key ={10}  a= [2,4,8,10,12,14]

#include <iostream>
using namespace std;

int linearSearch( int arr[], int n , int key ){
    
    for(int i=0; i<n; i++){

     if(arr[i] == key){
        return i;
     }

    }

    return -1; //agar index mili hi nhi to
}



int main () {

    int arr[] = {2,4,6,8,10,12,14};
    int n = sizeof(arr) / sizeof(int);
    cout<<linearSearch(arr, n, 10);


    return 0;

}