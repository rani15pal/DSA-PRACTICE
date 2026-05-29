// MAX SUM IN SUBARRAY {2,-3 ,6, -5,4,2} 
// -------------->brute force method(not optimize way)----------------->

#include <iostream>
using namespace std;

// fine maxSumSubarry

void maxSumSubarry(int *arr, int n ){
   int maxSum = INT8_MIN;
   for(int start=0;  start<n; start++){ //outer loop

    for(int end=start; end<n; end++){ //inner loop
        int currSum = 0;

     for(int i=start; i<=end; i++){
       currSum += arr[i];
      }
     
      cout<<currSum <<", " ;
      // find max 

      maxSum = max(maxSum, currSum);
   }
   cout<<endl;

   }
   cout<<"max subarry sum = " <<maxSum <<endl;
}

int main(){

   int arr [] = {2, -3, 6, -5, 4, 2};
   int n = sizeof(arr) / sizeof(int);


   maxSumSubarry(arr, n);






    return 0;

}

