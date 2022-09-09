//Write a program in C++ to compute quotient and remainder.



#include<iostream>
using namespace std;
#include <math.h>
#define PI 3.14159

int main()
{
  
  
  int quo,rem,dividend,divisor;;

  cout<<"Input the dividend : ";
  cin>>dividend;

  cout<<"Input the divisor : ";
  cin>>divisor;

  quo = dividend/divisor;
  rem = dividend % divisor;

  cout<<"The quotient of the division is : "<< quo << endl;
  cout<<"The remainder of the division is : "<< rem << endl;




    
    return 0;
    
}