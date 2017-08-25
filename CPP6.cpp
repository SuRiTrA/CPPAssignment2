#include <cmath>
#include <iostream>
using namespace std;

/*C++ program to find square-root of a number.*/

int main()
{ 
  double num=0,sqroot=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO SQUARE-ROOT OF A GIVEN NUMBER \n \n";
  cout<<"Enter the number (must be greater than equal to 0): ";
  cin>>num;
  sqroot=sqrt(num);
  cout<<"\n \n"<<"The square root of "<<num<<" is "<<sqroot;
  return 0;
}

  
