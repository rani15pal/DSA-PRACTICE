// find largest in array 

#include <iostream>
using namespace std ;

int main() {

  int arr [] = {5 ,7,  6, 9, 12};
  int n =sizeof(arr) / sizeof(int);
  // initialize max
  int max = arr[0];
   
  for(int i=0; i<n; i++){
    // logic 
    if(arr[i] > max){
        max = arr[i];
        // cout<<" assiging value " <<arr[i]<<"to max "<<endl ;
    }


  }


   cout<<"largest  = "<< max;


    return 0;
}