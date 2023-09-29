#include <iostream>
using namespace std;

/**
 
* * * * *
* * * * *
* * * * *
* * * * * 
* * * * *

10 10 10 10 10
10 10 10 10 10
10 10 10 10 10 
10 10 10 10 10
10 10 10 10 10
 
*/

int main(){

    int row  , col , n;

    cin>>n;

    for(row=1;row<=n;row++)
    {
       for(col=1 ; col<=n ; col++)
       {
        cout<<"*"<<" ";
       }
       cout<<endl;
    }

    cout<<endl;

    for(row=1;row<=n;row++)
    {
       for(col=1 ; col<=n ; col++)
       {
        cout<<10<<" ";
       }
       cout<<endl;
    }
}

