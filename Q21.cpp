//Program to print opposite half pyramid 



#include <iostream>
using namespace std;
 
int main() 
{
    int row;
    cout<<"Ennter a number of Rows : ";
    cin>>row;

    for(int i = 1; i<=row;i++){  //row
        for(int k=row;k>i;k--){  //spaces
            cout<<" ";
        }
        for(int j=1; j<=i;j++){  //char
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}