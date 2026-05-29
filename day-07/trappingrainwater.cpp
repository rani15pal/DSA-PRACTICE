
#include <iostream>
using namespace std;

void rainTrap(int *heights, int n){
   int leftMax[20000];
   int rightMax[20000];

   //intialized 
   leftMax[0] = heights[0];
   rightMax[n-1] = heights[n-1];

    //  leftMax  
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
        // cout<<leftMax[i]<<"," ;
    }

    //rightMax
    for(int i=n-2; i>=0; i--){
      rightMax[i] = max(rightMax[i+1], heights[i+1]);
    //   cout<<rightMax[i]<<"," ;
    }

    // waterTrap--(min height - h)
     int waterTrapped = 0;
    for(int i=1; i<n; i++){
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currWater > 0){
            waterTrapped += currWater;

        }

    }

    cout<<"water trapped  = " <<waterTrapped << endl;

  
}


int main(){

    int heights[] = {4,2,0,6,3,2,5 };
    int n = sizeof(heights) / sizeof(int) ;
    
     rainTrap(heights, n) ;


    return 0;
}