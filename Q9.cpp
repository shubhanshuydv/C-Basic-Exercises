//Write a program in C++ to find the area and circumference of a circle.



#include<iostream>

using namespace std;

int main()
{
    float r,c,area;
    cout<<"Enter radius"<<endl;
    cin>>r;

    c=2*3.14*r;
    area=3.14*r*r;

    cout<<"circumference of a circle"<<" "<<c<<endl;
    cout<<"area of a circle"<<" "<<area<<endl;
    
    return 0;
    
}