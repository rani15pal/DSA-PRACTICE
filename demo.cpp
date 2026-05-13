#include<iostream>
using namespace std;

int main() {
    
  // avg of 3 variables
  float math;
  float science;
  float physics;

  cout<<" Enter mark of math : " ;
  cin>>math;

  cout<<" Enter mark of science : " ;
  cin>>science;

  cout<<" Enter mark of physics : " ;
  cin>>physics;

  float avgMarks  = (math + science + physics) / 3 ;

  cout<<"avgMarks = " <<avgMarks<<endl;

    return 0;
}
