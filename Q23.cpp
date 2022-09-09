//Program to print half pyramid a using numbers



#include <iostream>
using namespace std;
 
int main() 
{
    int row,j;
    cout<<"Ennter a number of Rows : ";
    cin>>row;

    for(int i = 1; i<=row;i++){

        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;

    }


    //other method


    for(int i = 1; i <= row; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }


    
    return 0;
}