#include <iostream>
using namespace std;

int main() {
    //  print day from 1to7 using switch
    int day =1 ;
    cout<<"Enter day : ";
    cin>>day;

    switch(day){
         case 1:cout<<"monday"<<endl;
        break;

         case 2:cout<<"tuesday"<<endl;
        break;

         case 3:cout<<"wednesday"<<endl;
        break;

         case 4:cout<<"thrusday"<<endl;
        break;

         case 5:cout<<"friday"<<endl;
        break;

         case 6:cout<<"satrusday"<<endl;
        break;

         case 7:cout<<"sunday"<<endl;
        break;

        default:cout<<"invaid day"<<endl;
        

    }

    return 0;
}

