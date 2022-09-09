//Program to print reverse half pyramid 



#include <iostream>
using namespace std;
 
int main() 
{
    int row;
    cout<<"Ennter a number of Rows : ";
    cin>>row;

    for(int i =row;i>=1;i--){   //for row
        for(int j =i;j>0;j--){  // for patterns
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}