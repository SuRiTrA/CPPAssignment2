#include <iostream>
#include <cmath>
using namespace std;

/*C++ program to enter P, T, R and calculate Simple Interest.*/

int main()
{ 
  double P,T,R, SI;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO ENTER P, T, R AND DETERMINE THE SIMPLE INTEREST\n \n";
  cout<<"Enter the Principal: ";
  cin>>P;
  cout<<"Enter the Rate of interest(p.a.): ";
  cin>>R;
  cout<<"Enter the Time(in years): ";
  cin>>T;
  SI=(P*T*R)/100;
  cout<<"\n \nThe calculated Simple Interest comes out to be: "<<SI;
  return 0;
}
