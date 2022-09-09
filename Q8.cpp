//Write a program in C++ to find the area of any triangle using Heron's Formula.



#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float s,a,b,c,area;
    cout<<"Enter Three sides of Triangle"<<endl;
    cin>>a>>b>>c;

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    

    cout<<"Area of Triangle"<<" "<<area<<endl;
    
    return 0;
    
}