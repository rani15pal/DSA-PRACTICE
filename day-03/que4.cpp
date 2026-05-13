//Armstrong
// 153 = 1^3* 5^3 *3^3= 153;

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter n : ";
    cin>>n;
    
    int num = n;
    int cubesum = 0;

    

    while(num > 0){
        int lastdigit = num % 10; //153---3 / 5/1
        cubesum += lastdigit * lastdigit * lastdigit; //3*3*3-->)+27 +5*5*5->152+1
        num = num / 10;//15/10-->1/ 0.1
    }

    if(n == cubesum){
        cout<<"n is Armstrong number"<<endl;
    }else{
        cout<<"n is NOT Armstrong number"<<endl;
    }

}

