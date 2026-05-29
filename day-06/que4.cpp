// find smalles in array 

 #include <iostream>
 using namespace std;

 int main(){

    int arr [] = { 5, 7 , 9, 3, 12 } ;
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    cout<<" smallest  = " <<min;



    return 0; 
 }