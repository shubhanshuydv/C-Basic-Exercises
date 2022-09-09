



#include <iostream>
using namespace std;
 
int main() 
{
    int row;
    cout<<"Ennter a number of Rows : ";
    cin>>row;

    for(int i = row; i>=1;i--){  //row

        for(int j=1; j<=(row-i);j++){  //char
            cout<<" ";
        }
        for(int k=i;k>=1;k--){  //spaces
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}