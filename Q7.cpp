//Write a program in C++ to find the Area and Perimeter of a Rectangle.



#include<iostream>
using namespace std;

int main()
{
    float area,per,l,b;
    cout<<"Enter Length and Breadth"<<endl;
    cin>>l>>b;

    per=2*(l+b);
    area=l*b;

    cout<<"Area of Rectangle"<<" "<<area<<endl;
    cout<<"Perimeter of Rectangle"<<" "<<per<<endl;
    return 0;
    
}