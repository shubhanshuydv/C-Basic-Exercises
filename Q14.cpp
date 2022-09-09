//Write a program in C++ to compute the total and average of four numbers.



#include<iostream>
using namespace std;


int main()
{
  
  
  float a,b,c,d,avg;
  cout<<"Input Numbers (separated by space) : ";
  cin>>a>>b>>c>>d;

  avg=(a+b+c+d)/4;

  cout<<"The average of four numbers is : "<<avg<<endl;

    
    return 0;
    
}