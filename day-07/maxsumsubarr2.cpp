// MAX SUM IN SUBARRAY {2,-3 ,6, -5,4,2} 
// -------------- OPTIMIZED CODE (TC-O(N^2))----------------->

#include <iostream>
using namespace std;

// fine maxSumSubarry

void maxSumSubarry(int *arr, int n ){
   int maxSum = INT8_MIN;
   for(int start=0;  start<n; start++){ //outer loop  // start =2 
     int currSum = 0;  // 1st change

    for(int end=start; end<n; end++){ //inner loop   // end 2,3,4,5 
         currSum += arr[end] ; //2nd change 
    
      // find max 

      maxSum = max(maxSum, currSum);
   }
  

   }
   cout<<"max subarry sum = " <<maxSum <<endl;
}

int main(){

   int arr [] = {2, -3, 6, -5, 4, 2};
   int n = sizeof(arr) / sizeof(int);


   maxSumSubarry(arr, n);






    return 0;

}

