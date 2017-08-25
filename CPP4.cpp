
#include <iostream>
using namespace std;

/*C++ program to convert days into years, weeks and days.*/

int main()
{ 
  int days=0, years=0, weeks=0, lday=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO CONVERT DAYS INTO YEARS, WEEKS AND DAYS \n \n";
  cout<<"Enter the number of days to be converted: ";
  cin>>days;
  years=days/365;
  weeks=days/7;
  lday=days-(weeks*7);
  cout<<"\n \n"<<days<<" days can be written in the form of "<<years<<" year, "<<weeks<<" weeks and "<<lday<<" remaining days";
  return 0;
}

  
