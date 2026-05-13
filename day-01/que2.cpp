/*
Q2: Enter cost of 3 items from the user (float data type):
- a pencil
- a pen
- an eraser

Output the total cost as the bill.

*/

#include <iostream>
using namespace std;
int main(){
    
    // code 
    float pencil, pen, eraser ;

    cout<<"pencil : ";
    cin>> pencil;

    cout<<"pen  : ";
    cin>> pen ;

    cout<<"eraser : ";
    cin>> eraser;
   

    float total = pencil + pen + eraser ;
    float gst = total * 0.18;
    float final = gst + total;

    cout<<"total cost as the bill = "<<total<<endl;
    cout<<"final cost with gst  = "<<final<<endl;

    return 0;

}
