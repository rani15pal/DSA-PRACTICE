// leet code question  jo (vector ) but hum arry se krenge 

#include <iostream>
using namespace std;

// logic 

void maxProfit(int *prices, int n){
    int bestBuy[100000] ; // given 10^4  MAX SIZE OF ARRY 
    bestBuy[0] = INT8_MAX;  // 0 idx -- infinte

    for(int i=1; i<n; i++){
        //BEST BUY (min)
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);  // best buy ek index km pr dono ka (min )
        // cout<<bestBuy[i]<<", " ;
    }


    int maxProfit = 0;  // return 0
    for(int i=1; i<n; i++){
        //profit  (max)
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
  
    cout<<"max profit = " <<maxProfit <<endl; 
}

int main(){

    int prices[] = {7, 1, 5, 3, 6, 4 };
    int n = sizeof(prices) / sizeof(int) ;
    
    maxProfit(prices, n); 


    return 0;
}


// TC = N+ N = 2N = N  ---> O(n)