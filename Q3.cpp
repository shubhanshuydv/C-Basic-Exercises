//finding max num in 3



#include <iostream>
using namespace std;
 
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b && a >c){
        cout<<a;
    }
    else {
        if (b > c)
        {
            cout<<b;
        }
        else {
        cout<<c;
        }
        
    }
    

    return 0;
    
}