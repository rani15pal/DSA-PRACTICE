// REVERSE AN ARRAY  USING " WITHOUT SPACE "

#include <iostream>
using namespace std;

void printArr(int *arr, int n){
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
}

int main() {
    int arr [] = { 10, 20, 30, 40, 50};
    int n = sizeof(arr)  / sizeof(int);

    int start = 0 , end = n-1;

    while(start < end ){
        // swap (using swap variable [swap(a,b)])
        swap(arr[start], arr[end]);
        start ++;
        end--;

    }

    printArr(arr, n);

    return 0;

  

}