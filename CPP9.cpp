#include <iostream>
#include <cmath>
using namespace std;

/*C++ program to find area of an equilateral triangle.*/

int main()
{ 
  double side=0,area=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO FIND AREA OF AN EQUILATERAL TRIANGLE FROM ITS SIDE\n \n";
  cout<<"Enter the side: ";
  cin>>side;
  area=(sqrt(3)/4)*side*side;
  cout<<"\n \nThe area of the triangle comes out to be: "<<area;
  return 0;
}
