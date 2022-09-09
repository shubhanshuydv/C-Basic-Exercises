//Write a program in C++ to check whether a number is positive, negative or zero. 



#include<iostream>
using namespace std;


int main()
{
  
  
  float num;
  cout<<"Input a number : ";
  cin>>num;

  if(num>0){
    cout<<"The entered number is positive. "<<endl;
  }

  else if(num<0){
    cout<<"The entered number is Negative. "<<endl;
  }
  else {
    cout<<"The entered number is Zero. "<<endl;
  }
  
    
    return 0;
    
}