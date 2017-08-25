#include <iostream>
using namespace std;

/*C++ program to enter base and height of a triangle and find its area.*/

int main()
{ 
  double base=0, height=0, area=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO FIND AREA OF TRIANGLE FROM ITS BASE AND HEIGHT \n \n";
  cout<<"Enter the base : ";
  cin>>base;
  cout<<"Enter the height: ";
  cin>>height;
  area=0.5*base*height;
  cout<<"\n \nThe area of the triangle comes out to be: "<<area;
  return 0;
}
