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

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

9 8 7
6 5 4
3 2 1
 
*/

int main(){

    int row  , col , n;
    cout<<"Enter The Value of N"<<endl;
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

    cout<<endl;

    int k = 1;

    for(row=1;row<=n;row++)
    {
      for(col=1;col<=n;col++)
      {
         cout<<k<<" ";
         k++;
      }
      cout<<endl;
    }

    cout<<endl;


    int m = n*n;

    for(row=1;row<=n;row++)
    {
      for(col=1;col<=n;col++)
      {
         cout<<m<<" ";
         m--;
      }
      cout<<endl;
    }

    cout<<endl;
}

