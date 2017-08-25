#include <iostream>
using namespace std;

/*C++ program to enter length in centimeter and convert it into meter and kilometer.*/

int main()
{ 
  double cm=0,m=0,km=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO CONVERT LENGTH(IN cm) TO m AND km \n \n";
  cout<<"Enter the length (in cm) to be converted: ";
  cin>>cm;
  m=cm/100;
  km=m/1000;
  cout<<"\n \nThe length in m is "<<m<<" and the length in km is "<<km;
  return 0;
}
