//Write a program in C++ to convert temperature in Kelvin to Fahrenheit or Kelvin to Celsius



#include<iostream>
using namespace std;

int main()
{
    float kev,fahr,cel;
    cout<<"Input the temperature in Kelvin"<<endl;
    cin>>kev;

    cout<<"The temperature in Kelvin "<<kev<<endl;

    fahr = (9.0 / 5) * (kev - 273.15) + 32;
    cel = kev - 273.15;

    cout<<"The temperature in Fahrenheit : "<<fahr<<endl;
    cout<<"The temperature in Celsius : "<<cel<<endl;
     
    return 0;
    
}