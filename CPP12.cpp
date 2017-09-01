#include <iostream>
#include <cmath>
using namespace std;

/*C++ program to enter P, T, R and calculate COMPOUND Interest.*/

int main()
{ 
  double P,T,R, CI;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO ENTER P, T, R AND DETERMINE THE COMPOUND INTEREST\n \n";
  cout<<"Enter the Principal: ";
  cin>>P;
  cout<<"Enter the Rate of interest(p.a.): ";
  cin>>R;
  cout<<"Enter the Time(in years): ";
  cin>>T;
  CI=P*pow((1+(R/100)),T)-P;
  cout<<"\n \nThe calculated Compound Interest comes out to be: "<<CI;
  return 0;
}
