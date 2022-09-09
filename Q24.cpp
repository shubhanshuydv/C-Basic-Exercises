//Inverted half pyramid using numbers



#include <iostream>
using namespace std;
 
int main() 
{
    int row,j;
    cout<<"Ennter a number of Rows : ";
    cin>>row;

    for(int i = 0; i<=row;i++){

        for(int j=1;j<=(row-i);j++){
            cout<<j;
        }
        cout<<endl;

    }

    return 0;

}