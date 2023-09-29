#include <iostream>
using namespace std;

/*
* * * * * 
* * * *
* * *
* * 
*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int main(){

    int n , row , col;

    cout<<"Enter The value of N";
    cin>>n;

    for(row=n;row>=1;row--)
    {
        for(col=1 ; col<=row; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
        for(col=1 ; col<=(n-(row-1)); col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(row=n;row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

     for(row=1;row<=n; row++)
    {
        for(col=1; col<=(n-(row-1)); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
