//Write a program in C++ to find the third angle of a triangle




#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Two Sides od Triangle"<<endl;
    cin>>a>>b;

    c=180-(a+b);

    cout<<"Third side of trinagle is "<<" "<<c<<endl;
    
    
    return 0;
    
}