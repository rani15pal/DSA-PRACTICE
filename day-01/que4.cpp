/*
Q4: Write a program to calculate the area of a circle

Input: r (radius)
Output: PI * r * r (area)

*/


#include <iostream>
using namespace std;

int main() {
    
    int r ;
    float PI = 3.14;
   

    cout<<"enter r :";
    cin>>r;

     float A = PI * r * r;

    cout<<"A = "<<A<<endl;

    return 0;
}