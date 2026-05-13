/*
Build a Simple Interest Calculator

Input: principal (P), rate (R), time (T)
Output: (P * R * T) / 100

*/
#include <iostream>
using namespace std;

int main() {

    float P, R, T ;

    cout<<"P: ";
    cin>> P;

    cout<<"R  : ";
    cin>> R ;

    cout<<"T : ";
    cin>> T;
   
    float SI = (P * R * T) / 100 ;

    cout<<"SI = "<<SI<<endl;
   



    return 0;
}