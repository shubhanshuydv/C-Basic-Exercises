//Write a program in C++ to calculate the volume of a sphere.


#include<iostream>
using namespace std;

int main()
{
    float v,r;
    cout<<"Enter radius"<<endl;
    cin>>r;

    v=(4*3.14*r*r*r)/3;

    cout<<"Volume of a sphere is "<<" "<<v<<endl;
    return 0;
    
}