//Write a program in C++ to print a welcome text in a separate line

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string name;
    cout<<"Enter Your Name"<<endl;
    getline (cin,name);
    cout<<"Welcome "<<name<<endl;

    return 0;
    
}