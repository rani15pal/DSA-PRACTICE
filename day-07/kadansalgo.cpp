// KADANE`S ALGO - TO FIND MAX IN SUB ARRAY


#include <iostream>
using namespace std ;

// kadane`s - algo 

void maxSubarrySum(int *arr, int n){
  int maxSum = INT8_MIN;
  int currSum = 0;

  for(int i=0; i<n; i++){
    currSum += arr[i];
    maxSum = max(maxSum, currSum); // to find max

    if(currSum < 0){
        currSum = 0; //if currsum will be -ve than max sum not found max value 
    }
    
  }
   cout<<" max sum in subarry using kadane`s algo = " <<maxSum;
}



int main(){

    int arr[] = {2, -3,  6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarrySum(arr, n);

    return 0;
}